#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("harry.txt", "a");
    //can also use "w"
    //but write mode first empty the whole file and then write 
    //but append dont
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}