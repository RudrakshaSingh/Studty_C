#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "a");
    
    //in read mode
    // char c = fgetc(ptr); // used to read a character from file
    // printf("%c", c);
    
    fputc('c', ptr);
    return 0;
}