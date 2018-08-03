# Stdin and Stderr

## Introduction

If you, as most people, do not want to loose your work, you will want to put your results into a file. However, you do not want the errors and warnings to stay in that file. This is easily done by understanding the concept of Standard Output \(`stdout`\) and Standard Error \(`stderr`\).

## Putting the stdout to a file

With this purpose, we use the `'>'` operator. Such operator tells the program to "not write the stdout to the console, but to a file"

```bash
# Notice that the ./ is required 
# for scripts that are not in the EMPFILE
emp - ./hello > results.txt
```

If you see the content of the resulting files, you will see what was previously to the console.

## Putting the stderr to a file

With this purpose, we use the `'2>'` operator. Such operator tells the program to "not write the stderr to the console, but to a file"

```bash
emp - ./hello 2> errors.txt
```

## Some other useful tips

You should know that you can use both operators together

```bash
emp - ./hello 2> errors.txt > output.txt
```

Also, find out what the `>>` and `2>>` operators do

```bash
emp - ./hello 2>> errors.txt >> output.txt
```

## Conclusions

