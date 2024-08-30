#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    char s1[56] = "Harry";
    char s2[56] = " bhai";

    // 1)length of a string excluding null character
    printf("length of string : %d \n", strlen(st));


    // 2) copying one string to another
    char target[30];
    strcpy(target, st); // target now contains "Harry"
    printf("%s : target %s\n", st, target);

    // 3) concatenate 2 stringve space before s2
    strcat(s1, s2); // s1 now contains "helloharry" <no space in between>
    printf("concatenate %s\n", s1);

    //4) compare 2 string (0 then equal)
    //if first word comes in dictionary first then it give negative value
    int a = strcmp("deep", "joke"); // DJ is negative
    printf("%d", a);

    return 0;
}