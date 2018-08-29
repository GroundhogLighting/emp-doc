
## review

Calls RVU program


### Parameters

*This function receives no parameters*

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
review()
```
{% endtab %}
{% endtabs %}


## solve

Solves the task manager


### Parameters

*This function receives no parameters*

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
solve()
```
{% endtab %}
{% endtabs %}


## print_task_flow

Prints the current task flow to the standard output


### Parameters

*This function receives no parameters*

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
print_task_flow()
```
{% endtab %}
{% endtabs %}


## purge_tasks

Removes all tasks from the Task Manager


### Parameters

*This function receives no parameters*

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
purge_tasks()
```
{% endtab %}
{% endtabs %}


## warn

Prints a warning to the standard error, but continues processing the     script


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| message  | The message to warn | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
warn(message)
```
{% endtab %}
{% endtabs %}


## inspect

Prints a certain value to the standard output


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| value  | The value to print | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
inspect(value)
```
{% endtab %}
{% endtabs %}


## get_workplanes_list

Retrieves an array with the workplanes names in the model


### Parameters

*This function receives no parameters*

### Returns

| **Return** | **Description** |
| --- | --- |
| workplane_array  | An array with the workplanes names | 

{% tabs %}
{% tab title='Example 1' %}
```lua
workplane_array  = get_workplanes_list()
```
{% endtab %}
{% endtabs %}


## get_workplanes_data

Retrieves a table with the workplane information in the model.     That is, name, maximum size of pixel (triangulation), tasks, etc.


### Parameters

*This function receives no parameters*

### Returns

| **Return** | **Description** |
| --- | --- |
| workplane_array  | An array with the workplanes names | 

{% tabs %}
{% tab title='Example 1' %}
```lua
workplane_array  = get_workplanes_data()
```
{% endtab %}
{% endtabs %}


## is_workplane

Checks if a workplane does exists in the model


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| workplane_name  | The name of the workplane | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| exist?  | True or False | 

{% tabs %}
{% tab title='Example 1' %}
```lua
exist?  = is_workplane(workplane_name)
```
{% endtab %}
{% endtabs %}


## count_workplane_polygons

Counts the number of polygons in a workplane


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| workplane_name  | The name of the workplane | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | number of polygons | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = count_workplane_polygons(workplane_name)
```
{% endtab %}
{% endtabs %}


## workplane

Creates a new Workplane


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| workplane_name  | The name of the workplane | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | number of polygons | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = workplane(workplane_name)
```
{% endtab %}
{% endtabs %}


## get_metrics

Retrieves an array with the metrics


### Parameters

*This function receives no parameters*

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | metrics | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = get_metrics()
```
{% endtab %}
{% endtabs %}


## get_metric

Retrieves a single metric


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the metric to retrieve | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | metrics | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = get_metric(name)
```
{% endtab %}
{% endtabs %}


## get_layers_list

Retrieves an array with the layer names in the model


### Parameters

*This function receives no parameters*

### Returns

| **Return** | **Description** |
| --- | --- |
| workplane_array  | An array with the layer names | 

{% tabs %}
{% tab title='Example 1' %}
```lua
workplane_array  = get_layers_list()
```
{% endtab %}
{% endtabs %}


## is_layer

Checks if a layer does exist in the model


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the workplane | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| exist?  | True or False | 

{% tabs %}
{% tab title='Example 1' %}
```lua
exist?  = is_layer(layer_name)
```
{% endtab %}
{% endtabs %}


## count_layer_objects

Counts the number of objects in a layer


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the layer | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | number of objects | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = count_layer_objects(layer_name)
```
{% endtab %}
{% endtabs %}


## count_layer_instances

Counts the number of ComponentInstances in a layer


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the layer | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | number of ComponentInstances | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = count_layer_instances(layer_name)
```
{% endtab %}
{% endtabs %}


## get_component_definitions_list

Retrieves an array with the ComponentDefinition names in the model


### Parameters

*This function receives no parameters*

### Returns

| **Return** | **Description** |
| --- | --- |
| workplane_array  | An array with the ComponentDefinition names | 

{% tabs %}
{% tab title='Example 1' %}
```lua
workplane_array  = get_component_definitions_list()
```
{% endtab %}
{% endtabs %}


## is_component_definition

Checks if a ComponentDefinition does exist in the model


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the ComponentDefinition | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| exist?  | True or False | 

{% tabs %}
{% tab title='Example 1' %}
```lua
exist?  = is_component_definition(layer_name)
```
{% endtab %}
{% endtabs %}


## component

Adds a Component Definition to the model


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the ComponentDefinition | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| exist?  | True or False | 

{% tabs %}
{% tab title='Example 1' %}
```lua
exist?  = component(layer_name)
```
{% endtab %}
{% endtabs %}


## count_component_definition_objects

Counts the number of objects in a ComponentDefinition


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the ComponentDefinition | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | number of objects | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = count_component_definition_objects(name)
```
{% endtab %}
{% endtabs %}


## count_component_definition_instances

Counts the number of ComponentInstances in a ComponentDefinition


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the ComponentDefinition | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | number of ComponentInstances | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = count_component_definition_instances(name)
```
{% endtab %}
{% endtabs %}


## get_location_data

Retrieves a table with the location of the model, containing: latitude, longitude,     time_zone, city, country, albedo and elevation fields.


### Parameters

*This function receives no parameters*

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the location data | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = get_location_data()
```
{% endtab %}
{% endtabs %}


## get_materials_list

Retrieves a list of all the material names in the model


### Parameters

*This function receives no parameters*

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | list with all the names of the materials | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = get_materials_list()
```
{% endtab %}
{% endtabs %}


## is_material

Checks if a material exists in the model


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the material | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | list with all the names of the materials | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = is_material(name)
```
{% endtab %}
{% endtabs %}


## get_material_class

Gets the class of a certain material


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the material | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | list with all the names of the materials | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = get_material_class(name)
```
{% endtab %}
{% endtabs %}


## is_object

Checks if an object exists in the model


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the object | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | list with all the names of the materials | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = is_object(name)
```
{% endtab %}
{% endtabs %}


## get_object_class

Gets the class of a certain object


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the material | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | list with all the names of the materials | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = get_object_class(name)
```
{% endtab %}
{% endtabs %}


## layer

Adds a new Layer object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the layer | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the created layer | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = layer(name)
```
{% endtab %}
{% endtabs %}


## bubble

Adds a new Bubble object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the object information at time of creation | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = bubble(data)
```
{% endtab %}
{% endtabs %}


## cone

Adds a new Cone object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the object information at time of creation | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = cone(data)
```
{% endtab %}
{% endtabs %}


## cup

Adds a new Cup object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the object information at time of creation | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = cup(data)
```
{% endtab %}
{% endtabs %}


## cylinder

Adds a new Cylinder object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the object information at time of creation | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = cylinder(data)
```
{% endtab %}
{% endtabs %}


## polygon

Adds a new Polygon object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the object information at time of creation | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = polygon(data)
```
{% endtab %}
{% endtabs %}


## ring

Adds a new Ring object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the object information at time of creation | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = ring(data)
```
{% endtab %}
{% endtabs %}


## source

Adds a new Source object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the object information at time of creation | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = source(data)
```
{% endtab %}
{% endtabs %}


## sphere

Adds a new Sphere object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the object information at time of creation | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = sphere(data)
```
{% endtab %}
{% endtabs %}


## tube

Adds a new Tube object to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| A  | table with the object information at time of creation | 

{% tabs %}
{% tab title='Example 1' %}
```lua
A  = tube(data)
```
{% endtab %}
{% endtabs %}


## dielectric

Adds a new Dielectric material to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the material | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = dielectric(data)
```
{% endtab %}
{% endtabs %}


## glass

Adds a new Glass material to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the material | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = glass(data)
```
{% endtab %}
{% endtabs %}


## glow

Adds a new Glow material to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the material | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = glow(data)
```
{% endtab %}
{% endtabs %}


## interface

Adds a new Interface material to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the material | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = interface(data)
```
{% endtab %}
{% endtabs %}


## light

Adds a new Light material to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the material | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = light(data)
```
{% endtab %}
{% endtabs %}


## metal

Adds a new Metal material to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the material | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = metal(data)
```
{% endtab %}
{% endtabs %}


## plastic

Adds a new Plastic material to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the material | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = plastic(data)
```
{% endtab %}
{% endtabs %}


## spotlight

Adds a new Spotlight material to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the material | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = spotlight(data)
```
{% endtab %}
{% endtabs %}


## trans

Adds a new Trans material to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the material | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = trans(data)
```
{% endtab %}
{% endtabs %}


## view

Adds a new View to the EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| The  | name of the view | 

{% tabs %}
{% tab title='Example 1' %}
```lua
The  = view(data)
```
{% endtab %}
{% endtabs %}


## get_views_list

Returns a list of the views' names


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| An  | array with the names of the views in the model | 

{% tabs %}
{% tab title='Example 1' %}
```lua
An  = get_views_list(data)
```
{% endtab %}
{% endtabs %}


## is_view

Returns a list of the views' names


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| An  | array with the names of the views in the model | 

{% tabs %}
{% tab title='Example 1' %}
```lua
An  = is_view(data)
```
{% endtab %}
{% endtabs %}


## box

Returns a list of the views' names


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

| **Return** | **Description** |
| --- | --- |
| An  | array with the names of the views in the model | 

{% tabs %}
{% tab title='Example 1' %}
```lua
An  = box(data)
```
{% endtab %}
{% endtabs %}


## instance

Creates a new ComponentInstancex


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
instance(data)
```
{% endtab %}
{% endtabs %}


## ray_trace_options

Modifies the ray-tracing options in the current EmpModel


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| options  | A Table with the ray-tracing options to set | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
ray_trace_options(options)
```
{% endtab %}
{% endtabs %}


## print_ray_trace_options

Prints the current ray-trace opcions. If a file is given, the options     will be printed to such file. If not, the options will be printed     to the Standard Output.


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| file  | The name of the file to write | FALSE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
print_ray_trace_options(file)
```
{% endtab %}
{% endtabs %}


## write_scene_file

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_scene_file(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_model_info

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_model_info(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_rif_file

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_rif_file(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_components

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_components(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_views

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_views(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_current_sky

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_current_sky(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_current_weather

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_current_weather(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_materials

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_materials(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_layers

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_layers(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_photosensors

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_photosensors(task_name, options)
```
{% endtab %}
{% endtabs %}


## write_workplane

Adds a task to the task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
write_workplane(task_name, options)
```
{% endtab %}
{% endtabs %}


## workplane_illuminance

Pushes a Calculate Workplane Illuminance task to the     task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
workplane_illuminance(task_name, options)
```
{% endtab %}
{% endtabs %}


## workplane_df

Pushes a Calculate Workplane Daylight Factor task to the     task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
workplane_df(task_name, options)
```
{% endtab %}
{% endtabs %}


## workplane_udi

Pushes a Calculate Workplane Useful Daylight Illuminance task to the     task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
workplane_udi(task_name, options)
```
{% endtab %}
{% endtabs %}


## workplane_da

Pushes a Calculate Workplane Daylight Autonomy task to the     task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
workplane_da(task_name, options)
```
{% endtab %}
{% endtabs %}


## workplane_ase

Pushes a Calculate Workplane Annual Sunlight Exposure task to the     task manager


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
workplane_ase(task_name, options)
```
{% endtab %}
{% endtabs %}


## push_metric

Pushes a generic Workplane metric to the Task Manager. This is an     alternative method to workplane_ase, workplane_da, etc.


### Parameters

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE | 
| options  | The options given | TRUE | 

### Returns

*This function returns nothing*

{% tabs %}
{% tab title='Example 1' %}
```lua
push_metric(task_name, options)
```
{% endtab %}
{% endtabs %}

