# Calculate daylight autonomy

### German Molina \|  November 4, 2017 \| version  1.0.0

Calcualtes the Daylight Autonomy for one or more workplanes

This script calculates the Daylight Autonomy. That is, percentage of the workplane that maintains a minimum illuminance

This is another paragraph

## Inputs:

1. Expected lux -- required
2. Expected time -- required
3. Beggining of the occupied hours -- required
4. End of the occupied hours -- required
5. Workplanes to calculate -- required

## Source code:

```lua
-- PARSE INPUTS
-- ============
min_lux = args[1]
min_time = args[2]
early = args[3]
late = args[4]

if not args[5] then
    raise("No workplanes were input")
end

-- ADD TASK
-- ========
nwps = #args-4
for i=1,nwps do
    if not worplane_exist(args[i+4]) then
        warn("Workplane '"..args[i+4].."' does not exist. It will be ignored")
    else

        wp_name = args[i+4]

        add_task {
            name = "Daylight Autonomy";
            workplane = wp_name;
            metric = "DA";
            min_illuminance = min_lux;
            min_time = min_time;
        }
    end
end
```

