# Pointers, Arrays, and Strings.

## Pointers

Pointer is a data type, a variable that stores the memory adress of another variable as its own value, generally to know the memory adress of a variable we use the following code

```c
adress_a = &p;
```
where "adress_a" is a variable where we store the memory adress of variable "a" and "p" is the pointer that points at "a".

in C we have two methods to output the value of a variable 

First: we can just write down the  code bellow

```c
printf("the value of your variable is %d\n", a):
```
Second: or we can use a pointer "p" that points at our variable and output its value using the code bellow

```c
printf("the value of your variable is %d\n", *p);
```

We used the character asterics to output the value of our desired variable

thats it for our pointers

Note: We have also other type of pointers, double pointer, arrays, strings...

## Arrays

Array in C can be defined as a method of clubbing multiple entities of similar type into a larger group. These entities or elements can be of int, float, char, or double data type or can be of user-defined data types too like structures

and we declare and initialize an array like this:

```c
int arr[5] = {1, 2, 3, 4, 5};
```

## Strings

A String in C programming is a sequence of characters terminated with a null character '\0'. The C String is stored as an array of characters. The difference between a character array and a C string is the string is terminated with a unique character '\0'.

We declare and initialize a string like this :

```c
char str[5] = "Scaler.";
```
We can do mutltiple operations and apply some functionsfrom the library 
```c
#include <string.h>
```

### The End
