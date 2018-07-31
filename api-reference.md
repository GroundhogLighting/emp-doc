
# Method group

{% method -%}
    ## workplane\_exist {#install}

    Checks if a workplane exists in the model

    | **Parameter** | **Kind** | **Required** |
    | --- | --- | --- |
    | Workplane name | String | TRUE |
    | Another param | Table | FALSE |



    {% tabs %}
    {% tab title="Example 1" %}
    ```lua
    wp_name = "my workplane"

    if( workplane_exist(wp_name) ){
        print("Workplane exists!")
    }else{
        raise("Workplane does not exist")
    }
    ```
    {% endtab %}

    {% tab title="Example 2" %}
    ```lua
    wp_name2 = "my workplane"

    if( workplane_exist(wp_name2) ){
        print("Workplane exists!")
    }else{
        raise("Workplane does not exist")
    }
    ```
    {% endtab %}
    {% endtabs %}
{% endmethod %}
