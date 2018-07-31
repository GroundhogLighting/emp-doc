# Standard scripts reference

## Calculate daylight autonomy

#### German Molina \|  November 4, 2017 \| version  1.0.0

Calcualtes the Daylight Autonomy for one or more workplanes

[See details](calculate-daylight-autonomy.md)

### Inputs:

1. Expected lux -- required
2. Expected time -- required
3. Beggining of the occupied hours -- required
4. End of the occupied hours -- required
5. Workplanes to calculate -- required

## Convergence test

#### German Molina \|  November 2, 2017 \| version  1.0.0

Tries to find the 'best' ambient parameters for solving your model

[See details](convergence-test.md)

### Inputs:

1. File with sensor points to perform test -- required
2. Number of randomly selected sensors to use for convergence test -- optional
3. Increase in Ambient Divisions \(i.e. next AD will be arg3\*AD\) -- optional
4. Increase in Ambient Bounces \(i.e. next AB will be AB + arg4\) -- optional

## Solves the whole model

#### German Molina \|  November 2, 2017 \| version  1.0.0

This script solves all the objectives in the model

[See details](solves-the-whole-model.md)

### Inputs:

None

## Solves a single workplane

#### German Molina \|  November 2, 2017 \| version  1.0.0

This script solves all the objectives in the model that correspond to a single workplane

[See details](solves-a-single-workplane.md)

### Inputs:

1. The workplane name -- required
2. A file with options -- optional

