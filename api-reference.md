
## review()

Calls RVU program

**No Parameters**

## solve()

Solves the task manager

**No Parameters**

## print_task_flow()

Prints the current task flow to the standard output

**No Parameters**

## purge_tasks()

Removes all tasks from the Task Manager

**No Parameters**

## warn(message)

Prints a warning to the standard error, but continues processing the     script

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| message  | The message to warn | TRUE

## inspect(value)

Prints a certain value to the standard output

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| value  | The value to print | TRUE

## get_workplanes_list()

Retrieves an array with the workplanes names in the model

**No Parameters**

## get_workplanes_data()

Retrieves a table with the workplane information in the model.     That is, name, maximum size of pixel (triangulation), tasks, etc.

**No Parameters**

## is_workplane(workplane_name)

Checks if a workplane does exists in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| workplane_name  | The name of the workplane | TRUE

## count_workplane_polygons(workplane_name)

Counts the number of polygons in a workplane

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| workplane_name  | The name of the workplane | TRUE

## workplane(workplane_name)

Creates a new Workplane

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| workplane_name  | The name of the workplane | TRUE

## get_metrics()

Retrieves an array with the metrics

**No Parameters**

## get_metric(name)

Retrieves a single metric

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the metric to retrieve | TRUE

## get_layers_list()

Retrieves an array with the layer names in the model

**No Parameters**

## is_layer(layer_name)

Checks if a layer does exist in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the workplane | TRUE

## count_layer_objects(layer_name)

Counts the number of objects in a layer

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the layer | TRUE

## count_layer_instances(layer_name)

Counts the number of ComponentInstances in a layer

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the layer | TRUE

## get_component_definitions_list()

Retrieves an array with the ComponentDefinition names in the model

**No Parameters**

## is_component_definition(layer_name)

Checks if a ComponentDefinition does exist in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the ComponentDefinition | TRUE

## component(layer_name)

Adds a Component Definition to the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the ComponentDefinition | TRUE

## count_component_definition_objects(name)

Counts the number of objects in a ComponentDefinition

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the ComponentDefinition | TRUE

## count_component_definition_instances(name)

Counts the number of ComponentInstances in a ComponentDefinition

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the ComponentDefinition | TRUE

## get_location_data()

Retrieves a table with the location of the model, containing: latitude, longitude,     time_zone, city, country, albedo and elevation fields.

**No Parameters**

## get_materials_list()

Retrieves a list of all the material names in the model

**No Parameters**

## is_material(name)

Checks if a material exists in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the material | TRUE

## get_material_class(name)

Gets the class of a certain material

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the material | TRUE

## is_object(name)

Checks if an object exists in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the object | TRUE

## get_object_class(name)

Gets the class of a certain object

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the material | TRUE

## layer(name)

Adds a new Layer object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the layer | TRUE

## bubble(data)

Adds a new Bubble object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## cone(data)

Adds a new Cone object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## cup(data)

Adds a new Cup object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## cylinder(data)

Adds a new Cylinder object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## polygon(data)

Adds a new Polygon object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## ring(data)

Adds a new Ring object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## source(data)

Adds a new Source object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## sphere(data)

Adds a new Sphere object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## tube(data)

Adds a new Tube object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## dielectric(data)

Adds a new Dielectric material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## glass(data)

Adds a new Glass material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## glow(data)

Adds a new Glow material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## interface(data)

Adds a new Interface material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## light(data)

Adds a new Light material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## metal(data)

Adds a new Metal material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## plastic(data)

Adds a new Plastic material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## spotlight(data)

Adds a new Spotlight material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## trans(data)

Adds a new Trans material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## view(data)

Adds a new View to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## get_views_list(data)

Returns a list of the views' names

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## is_view(data)

Returns a list of the views' names

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## box(data)

Returns a list of the views' names

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## instance(data)

Creates a new ComponentInstancex

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | TRUE

## ray_trace_options(options)

Modifies the ray-tracing options in the current EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| options  | A Table with the ray-tracing options to set | TRUE

## print_ray_trace_options(file)

Prints the current ray-trace opcions. If a file is given, the options     will be printed to such file. If not, the options will be printed     to the Standard Output.

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| file  | The name of the file to write | FALSE

## write_scene_file(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_model_info(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_rif_file(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_components(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_views(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_current_sky(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_current_weather(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_materials(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_layers(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_photosensors(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## write_workplane(task_name, options)

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## workplane_illuminance(task_name, options)

Pushes a Calculate Workplane Illuminance task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## workplane_df(task_name, options)

Pushes a Calculate Workplane Daylight Factor task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## workplane_udi(task_name, options)

Pushes a Calculate Workplane Useful Daylight Illuminance task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## workplane_da(task_name, options)

Pushes a Calculate Workplane Daylight Autonomy task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## workplane_ase(task_name, options)

Pushes a Calculate Workplane Annual Sunlight Exposure task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE

## push_metric(task_name, options)

Pushes a generic Workplane metric to the Task Manager. This is an     alternative method to workplane_ase, workplane_da, etc.

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | TRUE
| options  | The options given | TRUE
