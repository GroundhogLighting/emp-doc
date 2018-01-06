
#  Solves a single workplane


######  German Molina |  November 2, 2017 | version  1.0.0

 This script solves all the objectives in the model that correspond to a single workplane








## Inputs:

1.  The workplane name -- required
2.  A file with options -- optional


## Source code:

```lua

-- PARSE INPUTS
-- ============

wp_name = arg1
optfile = arg2


-- CHECK ARGUMENTS
-- ===============

if wp_name == nil then
    warn("A Workplane name is required as first input")
    return
end

if not workplane_exist(wp_name) then
    warn("Workplane "..wp_name.." does not exist")
    return
end

if arg2 ~= nil then
   load_ray_trace_options(arg2) 
end


-- All good... do the calculation
-- ==============================

-- Gather all the tasks in a workplane
tasks = get_tasks_by_workplane(arg1)

for i=1,#tasks do
    task_manager.add(tasks[i])
end

```

