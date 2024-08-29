#include <stdio.h>

int main(){

    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++; //goes up by the amt of bytes a pointer is taking
    printf("The value of ptr is %u\n", ptr);

    printf("\n");

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char b = 'A';
    char *ptr2 = &b;
    printf("The address of a is %u\n", &b);
    printf("The address of a is %u\n", ptr2);
    ptr2++;
    printf("The value of ptr is %u\n", ptr2);
    return 0;
}