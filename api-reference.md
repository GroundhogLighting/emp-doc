# API reference

## API reference

{% api-method method="command" path="workplane\_exists\(wp\_name\)" %}
{% api-method-summary %}
workplane\_exists
{% endapi-method-summary %}

{% api-method-description %}
It asks for a workplane name \(a String\) and will return true or false.
{% endapi-method-description %}

{% api-method-spec %}
{% api-method-request %}
{% api-method-path-parameters %}
{% api-method-parameter name="" type="string" required=false %}

{% endapi-method-parameter %}
{% endapi-method-path-parameters %}
{% endapi-method-request %}

{% api-method-response %}
{% api-method-response-example httpCode=200 %}
{% api-method-response-example-description %}

{% endapi-method-response-example-description %}

```

```
{% endapi-method-response-example %}
{% endapi-method-response %}
{% endapi-method-spec %}
{% endapi-method %}

## Method group

### workplane\_exist {#install}

Checks if a workplane exists in the model

| **Parameter** | **Kind** | **Required** |
| --- | --- | --- |
| Workplane name | String | TRUE |
| Another param | Table | FALSE |

#### Example

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
