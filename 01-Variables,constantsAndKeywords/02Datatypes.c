/*
Program: comments
Author: Harry
Date: 3 October 2030
*/
#include <stdio.h>

int main()
{
    // INTEGER  == usually 4 bytes
    // int a;
    //  a = 1;
    int a = 1;

    // DECIMAL NUMBER  == usually 4 bytes
    //  float b = 1.4;
    float b;
    b = 1.4;

    // CHARACTER in single quote only == always 1byte(8bits)
    //  char c = 'a';
    char c;
    c = 'a';

    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
}