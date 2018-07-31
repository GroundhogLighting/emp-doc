# API reference

{% api-method method="command" path="workplane_exists(wp_name)" %}

{% api-method-summary %}
workplane_exists
{% endapi-method-summary %}

{% api-method-description %}
It asks for a workplane name (a String) and will return true or false.
{% endapi-method-description %}

{% api-method-spec %}
    {% api-method-request %}
        {% api-method-path-parameters %}
        {% api-method-parameter name="id" type="string" %}
        ID of the cake to get, for free of course.
        {% endapi-method-parameter %}

        {% endapi-method-path-parameters %}

        {% api-method-query-parameters %}
        {% api-method-parameter name="recipe" type="string" %}
        The API will do its best to find a cake matching the provided recipe.
        {% endapi-method-parameter %}

        {% api-method-parameter name="gluten" type="boolean" %}
        Whether the cake should be gluten-free or not.
        {% endapi-method-parameter %}
        {% endapi-method-query-parameters %}

    {% endapi-method-request %}

    {% api-method-response %}
        {% api-method-response-example  %}
        
        {% api-method-response-example-description %}
            Cake successfully retrieved.
        {% endapi-method-response-example-description %}

        ```javascript
        {
            "name": "Cake's name",
            "recipe": "Cake's recipe name",
            "cake": "Binary cake"
        }
        ```
        {% endapi-method-response-example %}
        
    {% endapi-method-response %}
{% endapi-method-spec %}

{% endapi-method %}



