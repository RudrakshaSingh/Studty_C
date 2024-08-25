// Write a programme to calculate area of a rectangle
// 1)Using hard coded inputs
// 2)Using input supplied by the user

#include <stdio.h>

int main()
{
    int l;
    int b;
    printf("Enter length : ");
    scanf("%d", &l);

    printf("Enter breadth : ");
    scanf("%d", &b);

    printf("the area of rectangle is : %d", l * b);
    return 0;
}
