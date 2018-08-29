
## review

Calls RVU program

**No Parameters**

## solve

Solves the task manager

**No Parameters**

## print_task_flow

Prints the current task flow to the standard output

**No Parameters**

## purge_tasks

Removes all tasks from the Task Manager

**No Parameters**

## warn

Prints a warning to the standard error, but continues processing the     script

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| message  | The message to warn | REQUIRED

## inspect

Prints a certain value to the standard output

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| value  | The value to print | REQUIRED

## get_workplanes_list

Retrieves an array with the workplanes names in the model

**No Parameters**

## get_workplanes_data

Retrieves a table with the workplane information in the model.     That is, name, maximum size of pixel (triangulation), tasks, etc.

**No Parameters**

## is_workplane

Checks if a workplane does exists in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| workplane_name  | The name of the workplane | REQUIRED

## count_workplane_polygons

Counts the number of polygons in a workplane

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| workplane_name  | The name of the workplane | REQUIRED

## workplane

Creates a new Workplane

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| workplane_name  | The name of the workplane | REQUIRED

## get_metrics

Retrieves an array with the metrics

**No Parameters**

## get_metric

Retrieves a single metric

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the metric to retrieve | REQUIRED

## get_layers_list

Retrieves an array with the layer names in the model

**No Parameters**

## is_layer

Checks if a layer does exist in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the workplane | REQUIRED

## count_layer_objects

Counts the number of objects in a layer

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the layer | REQUIRED

## count_layer_instances

Counts the number of ComponentInstances in a layer

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the layer | REQUIRED

## get_component_definitions_list

Retrieves an array with the ComponentDefinition names in the model

**No Parameters**

## is_component_definition

Checks if a ComponentDefinition does exist in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the ComponentDefinition | REQUIRED

## component

Adds a Component Definition to the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| layer_name  | The name of the ComponentDefinition | REQUIRED

## count_component_definition_objects

Counts the number of objects in a ComponentDefinition

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the ComponentDefinition | REQUIRED

## count_component_definition_instances

Counts the number of ComponentInstances in a ComponentDefinition

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the ComponentDefinition | REQUIRED

## get_location_data

Retrieves a table with the location of the model, containing: latitude, longitude,     time_zone, city, country, albedo and elevation fields.

**No Parameters**

## get_materials_list

Retrieves a list of all the material names in the model

**No Parameters**

## is_material

Checks if a material exists in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the material | REQUIRED

## get_material_class

Gets the class of a certain material

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the material | REQUIRED

## is_object

Checks if an object exists in the model

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the object | REQUIRED

## get_object_class

Gets the class of a certain object

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the material | REQUIRED

## layer

Adds a new Layer object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| name  | The name of the layer | REQUIRED

## bubble

Adds a new Bubble object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## cone

Adds a new Cone object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## cup

Adds a new Cup object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## cylinder

Adds a new Cylinder object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## polygon

Adds a new Polygon object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## ring

Adds a new Ring object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## source

Adds a new Source object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## sphere

Adds a new Sphere object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## tube

Adds a new Tube object to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## dielectric

Adds a new Dielectric material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## glass

Adds a new Glass material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## glow

Adds a new Glow material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## interface

Adds a new Interface material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## light

Adds a new Light material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## metal

Adds a new Metal material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## plastic

Adds a new Plastic material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## spotlight

Adds a new Spotlight material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## trans

Adds a new Trans material to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## view

Adds a new View to the EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## get_views_list

Returns a list of the views' names

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## is_view

Returns a list of the views' names

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## box

Returns a list of the views' names

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## instance

Creates a new ComponentInstancex

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| data  | The table with the data | REQUIRED

## ray_trace_options

Modifies the ray-tracing options in the current EmpModel

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| options  | A Table with the ray-tracing options to set | REQUIRED

## print_ray_trace_options

Prints the current ray-trace opcions. If a file is given, the options     will be printed to such file. If not, the options will be printed     to the Standard Output.

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| file  | The name of the file to write | OPTIONAL

## write_scene_file

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_model_info

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_rif_file

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_components

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_views

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_current_sky

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_current_weather

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_materials

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_layers

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_photosensors

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## write_workplane

Adds a task to the task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## workplane_illuminance

Pushes a Calculate Workplane Illuminance task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## workplane_df

Pushes a Calculate Workplane Daylight Factor task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## workplane_udi

Pushes a Calculate Workplane Useful Daylight Illuminance task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## workplane_da

Pushes a Calculate Workplane Daylight Autonomy task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## workplane_ase

Pushes a Calculate Workplane Annual Sunlight Exposure task to the     task manager

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED

## push_metric

Pushes a generic Workplane metric to the Task Manager. This is an     alternative method to workplane_ase, workplane_da, etc.

| **Name** | **Parameter** | **Required** |
| --- | --- | --- |
| task_name  | The name of the task to add | REQUIRED
| options  | The options given | REQUIRED
