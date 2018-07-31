# What is Emp

## Introduction

I like to say that, at least today, Emp is

> a __scriptable and higher [Radiance](https://www.radiance-online.org/)-based lighting calculation engine that can process in parallel as well as handle several pre and post processing tasks... and that can also read some 3D model formats.

### What is Radiance

It is highly possible that such defintion does not mean anything to you, and that is OK. For understanding it, you need to know what is [Radiance](https://www.radiance-online.org/), and hopefuly tried to use it. According to Radiance's [about](https://www.radiance-online.org/about) page:

> Radiance is a **suite of programs** for the analysis and visualization of lighting in design.
>
> Input files specify the scene geometry, materials, luminaires,time, date and sky conditions \(for daylight calculations\). Calculated values include spectral radiance \(ie. luminance + color\), irradiance \(illuminance + color\) and glare indices. Simulation results may be displayed as color images, numerical values and contour plots.
>
> The primary advantage of Radiance over simpler lighting calculation and rendering tools is that there are few limitations on the geometry or the materials that may be simulated. Radiance is used by architects and engineers to predict illumination, visual quality and appearance of innovative design spaces, and by researchers to evaluate new lighting and daylighting technologies.

As you may appreciate, Radiance is not "a program" but "a suite of programs". That is, it does not have a nice user interface with beautiful buttons that handle everything for you. Instead of that, it relies on your knowledge of the command line \(and programming\) to connect all these programs to get the results you want. It could be said that Radiance follows the [Unix Philosophy](https://en.wikipedia.org/wiki/Unix_philosophy).

### Why Emp

Radiance is like a toolbox that, if you know how to use it, you can build anything with. That means it is very useful for performing unique lighting calculations like in research or complex scenarios. However, routine operations would be made much more efficient if a more automatic tool existed. It would avoid usage and programming errors, and be extensively tested and debugged.

If Radiance is on one end, in the other end there are programs like [Groundhog](http://www.groundhoglighting.com). That is, tools that only perform routine calculations and that allow very little flexibility in terms of calculation methods. That is, they allow quickly drawing and simulating spaces **to which they have being designed for.** Groundhog, for example, is not a good tool for calculating Tubular Daylight Devices \(although some time ago it could do it, such feature was deprecated due to lack of interest from industry\).

Emp is, then, meant to be somewhere in between these two existing solutions. That is, to be scriptable like Radiance, but to have routine calculation scripts built in. In addition to that, it indends to be capable of reading 3D model formats and pre and post processing capabilities.

It could be argued that the same could be achieved by developing scripts in already existing programming languages \(e.g. Ruby, Python or Perl\). However, that would probably require standardizing a file distribution \(remember that Radiance works with several files\). Also, the development of Emp allows directly reading 3D models as well as handling Radiance processes much more efficiently \(see the [Task Manager ](https://groundhoglighting.gitbook.io/emp-doc/~/edit/drafts/-LIikH1DpvrnMg8WlJu8/quick-start-understanding-emp)section\).

### Main features and design objectives

In summary, Emp offers several advantages:

* **Efficient out-of-the-box multicore processing** across programs \(e.g. call several RCONTRIB threads at the same time, and parallel matrix multiplication\)
* **Out of the box script optimization** by eliminating redundant tasks \(i.e. do not create two octrees for calculating the Daylight Factor and the Annual Illuminance... one is enough... but please reuse the ambient files when possible\)
* **Cross platform scripting** \(i.e. do not rely on Unix programs to generate complex geometry... on the contrary, allow including trigonometric functions, randomness, and more, in all platforms\)
* **Read and write several file formats** \(i.e. allow me to draw my models in some modern 3D modelling tool\)
* **Simple automation of those tasks required on a daily basis**, so I can work faster and avoid errors \(i.e. I do not want to write a script every time I want to perform a Climate Based Daylight Simulation\)
* **Cross platform consistency** \(i.e. should I write `rcalc -e "$1 = $1+$2"` or `rcalc -e '$1 = $1+$2'` ?\)
* **Workplane interpretation as geometry** instead of a grid of points \(i.e. if I want to know the Spatial Daylight Autonomy of a workplane, I can probably describe a polygon that encolses it... but I do not want to write every point where the illuminance is measured\)
* **Post-processing capabilities** \(i.e. my workplane contains 4,528 sensors... I do not want to know, nor write down, the illuminance of each of them on each of the 8,760 hours of the year. Just return the CBD metric I asked for\)
* **Better file management** by cleaning files after use \(i.e. there are several files I am not interested in, which are just intermediate results... please delete them afterwards\)

These characteristics may allow companies and people who use Radiance automate their processes as well as sharing their knowledge.



