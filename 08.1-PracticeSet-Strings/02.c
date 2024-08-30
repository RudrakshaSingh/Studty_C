// Write a program to take string as an input from the user using %c and %s confirm 
// that the strings are equal.

#include <stdio.h>

int main(){
    char str[6];
    // scanf("%s", str);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]); //it also reads the enter key
        fflush(stdin);//it makes sure to not take enter key
    }
    str[5] = '\0';//single qoute
    
    printf("%s", str);
    return 0;
}