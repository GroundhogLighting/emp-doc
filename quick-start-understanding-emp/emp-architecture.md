# Emp architecture

## Introduction

Internally, Emp contains two main objects \(in addition to the Lua interpreter\). One is the Task Manager the other is the Model. The following sections describe the Task Manager, as the model is pretty straightforward to understand.

## The Task manager

The Task Manager is what handles all the metrics and other things you ask from Emp regarding a specific model. For example, you have a model of a house or an office, and you want to calculate Useful Daylight Illuminance and the Daylight Autonomy of two workplanes in it. What the Task Manager will do is:

1. Register that you want to calculate the UDI and DA of Workplane1 and Workplane2. These are called **Tasks**, ****and **the Task Manager is task-based**
2. We know that both UDI and DA require a Climate Based Daylight Simulation \(i.e. **the task manager expands the tasks by precalculating their dependencies**\). However, the same daylight simulation can be used for calculating both metrics. Thus, the Task Manager will only calculate one Climate Based Daylight Simulation for each workplane \(i.e. **the task manager removes redundant tasks**\)
3. The Task Manager will calculate all your tasks and their dependencies by taking advantage of all the cores in your machine. That is, **the task manager works in parallel**

## Conclusions

