(function( $ ){
    var field_commerce_price_class = 'field-name-commerce-price';
    var original_price = parseFloat($('.' + field_commerce_price_class).text().slice(0, -3).replace(',', '.'));

    function get_drop_downs_list() {
        return $(create_drop_downs_selector_from_rules());
    }

    function create_drop_downs_selector_from_rules() {
        let dropDownListsSelector = '';
        for (let ruleName in product_rules) {
            if (product_rules.hasOwnProperty(ruleName)) {
                dropDownListsSelector += "select[name='" + convert_field_name_to_html_name(ruleName) + "']" + ",";
            }
        }
        return dropDownListsSelector.slice(0, -1);
    }

    function convert_field_name_to_html_name(fieldName) {
        return "line_item_fields[" + fieldName + "][und]";
    }

    function convert_field_name_to_html_id(ruleName) {
        ruleName = ruleName.replace(/_/g, '-');
        ruleName = "edit-line-item-fields-" + ruleName + "-und";
        return ruleName;
    }

    var math_it_up = {
        '+': function (x, y) { return x + y },
        '-': function (x, y) { return x - y },
        '*': function (x, y) { return x * y },
        '/': function (x, y) { return x / y }
    };

    function modify_price(operation, value, currentPrice) {
        var priceObject = $('.' + field_commerce_price_class);
        let calculatedPrice = math_it_up[operation](currentPrice, parseFloat(value));
        let calcPriceFormatted = (calculatedPrice.toFixed(2) + ' zł').replace('.', ',');
        priceObject.text(calcPriceFormatted);
    }

    function find_dropdown_by_name(dropdowns, ruleName) {
        return $(dropdowns).filter(function () {
            return $(this).attr("name") == convert_field_name_to_html_name(ruleName);
        });
    }

    function calculate_price() {
        var currentPrice = original_price;

        var dropdowns = $(get_drop_downs_list());

        for (var ruleName in product_rules) {
            if (product_rules.hasOwnProperty(ruleName)) {
                var currentDropdown = find_dropdown_by_name(dropdowns, ruleName);
                let selectedElementIndex = currentDropdown[0].selectedIndex;
                // current rule has no related elements
                if (!product_rules[ruleName].hasOwnProperty("related_fields")) {
                    modify_price(product_rules[ruleName].operator, product_rules[ruleName].values[selectedElementIndex], currentPrice);
                }
                // current rule has related elements
                else {
                    for(relatedRuleName in product_rules[ruleName].related_fields) {
                        if (product_rules[ruleName].related_fields.hasOwnProperty(relatedRuleName)) {
                            var relatedDropdown = find_dropdown_by_name(dropdowns, relatedRuleName);
                            let relatedSelectedElementIndex = relatedDropdown[0].selectedIndex;
                            modify_price(product_rules[ruleName].related_fields[relatedRuleName].operator, 
                                        product_rules[ruleName].related_fields[relatedRuleName].values[selectedElementIndex][relatedSelectedElementIndex], 
                                        currentPrice);
                        }
                    }
                }
                currentPrice = parseFloat($('.' + field_commerce_price_class).text().slice(0, -3).replace(',', '.'));
            }
        }
    }

    function add_handlers() {
        for (var ruleName in product_rules) {
            if (product_rules.hasOwnProperty(ruleName)) {
                $("#" + convert_field_name_to_html_id(ruleName)).change(function () {
                    calculate_price();
                });
            }
        }
    }

    $(document).ready(function () {
        if (!(typeof product_rules === 'undefined' || product_rules === null)) {
            add_handlers();
        }
    });
})( jQuery );