// gets() is a function which can be used to receive a multi-word string.
//gets have buffer overflow problem
//now we use fgets()
#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st!

    printf("%s", st);
    puts(st); //difference is it automatically send next code to be in next line while printf dont
    printf("hey");

    return 0;
}