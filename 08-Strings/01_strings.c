#include <stdio.h>

int main(){
//A null character is used to denote the termination of a string. Characters are stored in 
//contiguous memory locations.

    // A string is a 1-D character array terminated by a null character (‘\0’)
    // char st[] = {'a', 'b', 'c', '\0'};

    char st[] = "abc"; // Same as doing char st[] = {'a', 'b', 'c', '\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("Character is %c \n", st[i]);  
    }
    
    
    return 0;
}