# API reference

## TASK MANAGER

### solve\_tasks

Solves the task manager

**Parameters**

_This function receives no parameters_

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
solve_task_manager()
```
{% endtab %}
{% endtabs %}

### print\_task\_flow

Prints the current task flow to the standard output

**Parameters**

_This function receives no parameters_

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
print_task_flow()
```
{% endtab %}
{% endtabs %}

### purge\_tasks

Removes all tasks from the Task Manager

**Parameters**

_This function receives no parameters_

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
purge_tasks()
```
{% endtab %}
{% endtabs %}

## INPUT / OUTPUT

### warn

Prints a warning to the standard error, but continues processing the script

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| message | The message to warn | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
warn(message)
```
{% endtab %}
{% endtabs %}

### inspect

Transforms a certain value into a detailed string. This works very simply for strings and numbers. Tables are transformed into JSON. However, Lua tables are more flexible than JSON objects... so take care of that.

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| value | The value to print | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
     r = inspect("car")
     print( r )
     --[[
     this should print:

     "car"
     ]]
```
{% endtab %}

{% tab title="Example 2" %}
```lua
     r = inspect(1)
     print( r )
     --[[
     this should print:

     1
     ]]
```
{% endtab %}

{% tab title="Example 3" %}
```lua
     r = inspect({1,2,3})
     print( r )
     --[[
     this should print:
     [
       1.0,
       2.0,
       3.0
     ]

     ]]
```
{% endtab %}

{% tab title="Example 4" %}
```lua
     r = inspect({
     a = 1; b = 2; c = 3;
     })
     print( r )
     --[[
     this should print:
     {
        "a": 1.0,
        "b": 2.0,
        "c": 3.0
     }

     ]]
```
{% endtab %}
{% endtabs %}

## EMP MODEL DATA

### get\_workplanes\_list

Retrieves an array with the workplanes names in the model

**Parameters**

_This function receives no parameters_

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| workplanes | An array with the workplanes names |

{% tabs %}
{% tab title="Example 1" %}
```lua
workplanes  = get_workplanes_list()
```
{% endtab %}
{% endtabs %}

### get\_workplanes\_data

Retrieves a table with the workplane information in the model. That is, name, maximum size of pixel \(triangulation\), tasks, etc.

**Parameters**

_This function receives no parameters_

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| workplanes | An array with the workplanes names |

{% tabs %}
{% tab title="Example 1" %}
```lua
workplanes  = get_workplanes_data()
```
{% endtab %}
{% endtabs %}

### is\_workplane

Checks if a workplane does exists in the model

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| workplane\_name | The name of the workplane | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| exist | True or False |

{% tabs %}
{% tab title="Example 1" %}
```lua
exist  = is_workplane(workplane_name)
```
{% endtab %}
{% endtabs %}

### count\_workplane\_polygons

Counts the number of polygons in a workplane

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| workplane\_name | The name of the workplane | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| n\_polygons | The number of polygons |

{% tabs %}
{% tab title="Example 1" %}
```lua
n_polygons  = count_workplane_polygons(workplane_name)
```
{% endtab %}
{% endtabs %}

### workplane

Creates a new Workplane

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| workplane\_name | The name of the workplane | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
workplane(workplane_name)
```
{% endtab %}
{% endtabs %}

### get\_metrics

Retrieves an array with the metrics

**Parameters**

_This function receives no parameters_

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| metrics | The metrics |

{% tabs %}
{% tab title="Example 1" %}
```lua
metrics  = get_metrics()
```
{% endtab %}
{% endtabs %}

### get\_metric

Retrieves a single metric

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the metric to retrieve | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_metric | The metric |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_metric  = get_metric(name)
```
{% endtab %}
{% endtabs %}

### get\_layers\_list

Retrieves an array with the layer names in the model

**Parameters**

_This function receives no parameters_

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| layer\_names | An array with the layer names |

{% tabs %}
{% tab title="Example 1" %}
```lua
layer_names  = get_layers_list()
```
{% endtab %}
{% endtabs %}

### is\_layer

Checks if a layer does exist in the model

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| layer\_name | The name of the workplane | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| exist | True or False |

{% tabs %}
{% tab title="Example 1" %}
```lua
exist  = is_layer(layer_name)
```
{% endtab %}
{% endtabs %}

### count\_layer\_objects

Counts the number of objects in a layer

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| layer\_name | The name of the layer | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| count | The number of objects |

{% tabs %}
{% tab title="Example 1" %}
```lua
count  = count_layer_objects(layer_name)
```
{% endtab %}
{% endtabs %}

### count\_layer\_instances

Counts the number of ComponentInstances in a layer

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| layer\_name | The name of the layer | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| count | The number of ComponentInstances |

{% tabs %}
{% tab title="Example 1" %}
```lua
count  = count_layer_instances(layer_name)
```
{% endtab %}
{% endtabs %}

### get\_component\_definitions\_list

Retrieves an array with the ComponentDefinition names in the model

**Parameters**

_This function receives no parameters_

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| definitions | An array with the ComponentDefinition names |

{% tabs %}
{% tab title="Example 1" %}
```lua
definitions  = get_component_definitions_list()
```
{% endtab %}
{% endtabs %}

### is\_component\_definition

Checks if a ComponentDefinition does exist in the model

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the ComponentDefinition | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| exist | True or False |

{% tabs %}
{% tab title="Example 1" %}
```lua
exist  = is_component_definition(name)
```
{% endtab %}
{% endtabs %}

### component

Adds a Component Definition to the model

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the ComponentDefinition | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_component | The name of the component definition |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_component  = component(name)
```
{% endtab %}
{% endtabs %}

### count\_component\_definition\_objects

Counts the number of objects in a ComponentDefinition

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the ComponentDefinition | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| count | The number of objects |

{% tabs %}
{% tab title="Example 1" %}
```lua
count  = count_component_definition_objects(name)
```
{% endtab %}
{% endtabs %}

### count\_component\_definition\_instances

Counts the number of ComponentInstances in a ComponentDefinition

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the ComponentDefinition | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| count | The number of ComponentInstances |

{% tabs %}
{% tab title="Example 1" %}
```lua
count  = count_component_definition_instances(name)
```
{% endtab %}
{% endtabs %}

### get\_location\_data

Retrieves a table with the location of the model, containing: latitude, longitude, time\_zone, city, country, albedo and elevation fields.

**Parameters**

_This function receives no parameters_

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| location | A table with the location data |

{% tabs %}
{% tab title="Example 1" %}
```lua
location  = get_location_data()
```
{% endtab %}
{% endtabs %}

### get\_materials\_list

Retrieves a list of all the material names in the model

**Parameters**

_This function receives no parameters_

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| materials | A list with all the names of the materials |

{% tabs %}
{% tab title="Example 1" %}
```lua
materials  = get_materials_list()
```
{% endtab %}
{% endtabs %}

### is\_material

Checks if a material exists in the model

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the material | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| is\_material | A list with all the names of the materials |

{% tabs %}
{% tab title="Example 1" %}
```lua
is_material  = is_material(name)
```
{% endtab %}
{% endtabs %}

### get\_material\_class

Gets the class of a certain material

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the material | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| mat\_class | A list with all the names of the materials |

{% tabs %}
{% tab title="Example 1" %}
```lua
mat_class  = get_material_class(name)
```
{% endtab %}
{% endtabs %}

### is\_object

Checks if an object exists in the model

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the object | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| is\_object | Is it? |

{% tabs %}
{% tab title="Example 1" %}
```lua
is_object  = is_object(name)
```
{% endtab %}
{% endtabs %}

### get\_object\_class

Gets the class of a certain object

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the material | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| obj\_class | A list with all the names of the materials |

{% tabs %}
{% tab title="Example 1" %}
```lua
obj_class  = get_object_class(name)
```
{% endtab %}
{% endtabs %}

### layer

Adds a new Layer object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| name | The name of the layer | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| layer | The name of the created layer |

{% tabs %}
{% tab title="Example 1" %}
```lua
layer  = layer(name)
```
{% endtab %}
{% endtabs %}

### bubble

Adds a new Bubble object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_bubble | A table with the object information at time of creation |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_bubble  = bubble(data)
```
{% endtab %}
{% endtabs %}

### cone

Adds a new Cone object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_cone | A table with the object information at time of creation |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_cone  = cone(data)
```
{% endtab %}
{% endtabs %}

### cup

Adds a new Cup object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_cup | A table with the object information at time of creation |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_cup  = cup(data)
```
{% endtab %}
{% endtabs %}

### cylinder

Adds a new Cylinder object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_cylinder | A table with the object information at time of creation |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_cylinder  = cylinder(data)
```
{% endtab %}
{% endtabs %}

### polygon

Adds a new Polygon object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_polygon | A table with the object information at time of creation |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_polygon  = polygon(data)
```
{% endtab %}
{% endtabs %}

### ring

Adds a new Ring object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_ring | A table with the object information at time of creation |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_ring  = ring(data)
```
{% endtab %}
{% endtabs %}

### source

Adds a new Source object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_source | A table with the object information at time of creation |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_source  = source(data)
```
{% endtab %}
{% endtabs %}

### sphere

Adds a new Sphere object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_sphere | A table with the object information at time of creation |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_sphere  = sphere(data)
```
{% endtab %}
{% endtabs %}

### tube

Adds a new Tube object to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_tube | A table with the object information at time of creation |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_tube  = tube(data)
```
{% endtab %}
{% endtabs %}

### dielectric

Adds a new Dielectric material to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_dielectric | The name of the material |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_dielectric  = dielectric(data)
```
{% endtab %}
{% endtabs %}

### glass

Adds a new Glass material to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_glass | The name of the material |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_glass  = glass(data)
```
{% endtab %}
{% endtabs %}

### glow

Adds a new Glow material to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_glow | The name of the material |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_glow  = glow(data)
```
{% endtab %}
{% endtabs %}

### interface

Adds a new Interface material to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| an\_interface | The name of the material |

{% tabs %}
{% tab title="Example 1" %}
```lua
an_interface  = interface(data)
```
{% endtab %}
{% endtabs %}

### light

Adds a new Light material to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_light | The name of the material |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_light  = light(data)
```
{% endtab %}
{% endtabs %}

### metal

Adds a new Metal material to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_metal | The name of the material |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_metal  = metal(data)
```
{% endtab %}
{% endtabs %}

### plastic

Adds a new Plastic material to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_plastic | The name of the material |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_plastic  = plastic(data)
```
{% endtab %}
{% endtabs %}

### spotlight

Adds a new Spotlight material to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_spotlight | The name of the material |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_spotlight  = spotlight(data)
```
{% endtab %}
{% endtabs %}

### trans

Adds a new Trans material to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| a\_trans | The name of the material |

{% tabs %}
{% tab title="Example 1" %}
```lua
a_trans  = trans(data)
```
{% endtab %}
{% endtabs %}

### view

Adds a new View to the EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| view | The name of the view |

{% tabs %}
{% tab title="Example 1" %}
```lua
view  = view(data)
```
{% endtab %}
{% endtabs %}

### get\_views\_list

Returns a list of the views' names

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| views | An array with the names of the views in the model |

{% tabs %}
{% tab title="Example 1" %}
```lua
views  = get_views_list(data)
```
{% endtab %}
{% endtabs %}

### is\_view

Returns a list of the views' names

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

| **Return** | **Description** |
| :--- | :--- |
| is\_a\_view | Does the view exist in the model? |

{% tabs %}
{% tab title="Example 1" %}
```lua
is_a_view  = is_view(data)
```
{% endtab %}
{% endtabs %}

### box

Returns a list of the views' names

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
box(data)
```
{% endtab %}
{% endtabs %}

### instance

Creates a new ComponentInstancex

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| data | The table with the data | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
instance(data)
```
{% endtab %}
{% endtabs %}

## SET-OPTIONS FUNCTIONS

### ray\_trace\_options

Modifies the ray-tracing options in the current EmpModel

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| options | A Table with the ray-tracing options to set | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
ray_trace_options(options)
```
{% endtab %}
{% endtabs %}

### print\_ray\_trace\_options

Prints the current ray-trace opcions. If a file is given, the options will be printed to such file. If not, the options will be printed to the Standard Output.

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| file | The name of the file to write | FALSE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
print_ray_trace_options(file)
```
{% endtab %}
{% endtabs %}

## EXPORT TO RADIANCE

### write\_scene\_file

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_scene_file(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_model\_info

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_model_info(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_rif\_file

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_rif_file(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_components

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_components(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_views

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_views(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_current\_sky

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_current_sky(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_current\_weather

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_current_weather(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_materials

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_materials(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_layers

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_layers(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_photosensors

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_photosensors(task_name, options)
```
{% endtab %}
{% endtabs %}

### write\_workplane

Adds a task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
write_workplane(task_name, options)
```
{% endtab %}
{% endtabs %}

## RAY-TRACING

### workplane\_illuminance

Pushes a Calculate Workplane Illuminance task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
workplane_illuminance(task_name, options)
```
{% endtab %}
{% endtabs %}

### workplane\_df

Pushes a Calculate Workplane Daylight Factor task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
workplane_df(task_name, options)
```
{% endtab %}
{% endtabs %}

### workplane\_udi

Pushes a Calculate Workplane Useful Daylight Illuminance task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
workplane_udi(task_name, options)
```
{% endtab %}
{% endtabs %}

### workplane\_da

Pushes a Calculate Workplane Daylight Autonomy task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
workplane_da(task_name, options)
```
{% endtab %}
{% endtabs %}

### workplane\_ase

Pushes a Calculate Workplane Annual Sunlight Exposure task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
workplane_ase(task_name, options)
```
{% endtab %}
{% endtabs %}

### workplane\_solar\_irradiation

Pushes a Calculate Annual Solar Irradiation task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
workplane_solar_irradiation(task_name, options)
```
{% endtab %}
{% endtabs %}

### workplane\_daylight\_exposure

Pushes a Calculate Annual Daylight Exposure task to the task manager

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
workplane_daylight_exposure(task_name, options)
```
{% endtab %}
{% endtabs %}

### push\_metric

Pushes a generic Workplane metric to the Task Manager. This is an alternative method to workplane\_ase, workplane\_da, etc.

**Parameters**

| **Name** | **Parameter** | **Required** |
| :--- | :--- | :--- |
| task\_name | The name of the task to add | TRUE |
| options | The options given | TRUE |

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
push_metric(task_name, options)
```
{% endtab %}
{% endtabs %}

## OTHER

### review

Calls RVU program

**Parameters**

_This function receives no parameters_

**Returns**

_This function returns nothing_

{% tabs %}
{% tab title="Example 1" %}
```lua
review()
```
{% endtab %}
{% endtabs %}

