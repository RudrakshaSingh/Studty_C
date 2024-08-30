//File I/O
//all program array variable made in Ram
//Buut file do not use Ram
#include <stdio.h>

int main()
{
    // A file pointer is a pointer to this structure of the file.
    FILE *ptr;
    ptr = fopen("harry.txt", "r");


    //reading first integer
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of first num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr);
    
    return 0;
}