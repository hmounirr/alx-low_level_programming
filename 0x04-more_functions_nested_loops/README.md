# Functions

Functions in C are the basic building blocks of a C program. A function is a set of statements enclosed within curly brackets ({}) that take inputs, do the computation, and provide the resultant output.

```c
#include <stdio.h>

/* function that adds to integers and return their sum */
int addition(int a, int b)
     return (a + b);
```
## Nested loops 

A nested loop means a loop statement inside another loop statement. That is why nested loops are also called “loop inside loops“. We can define any number of loops inside another loop.

```c
#include <stdio.h>

int i;
int j;
/* nested loops syntax */

for(i = 0; i < 10; i++)
   for(j = 0; j < 11; j++)
       printf(" %d + %d = %d\n", i, j, i + j);
```
