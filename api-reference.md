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
| --- | --- |
| Workplane name | String | TRUE |

#### Example

{% tabs %}
{% tab title="First Tab" %}
```lua
wp_name = "my workplane"

if( workplane_exist(wp_name) ){
    print("Workplane exists!")
}else{
    raise("Workplane does not exist")
}
```
{% endtab %}

{% tab title="Second Tab" %}

{% endtab %}
{% endtabs %}

```lua
wp_name = "my workplane"

if( workplane_exist(wp_name) ){
    print("Workplane exists!")
}else{
    raise("Workplane does not exist")
}
```

