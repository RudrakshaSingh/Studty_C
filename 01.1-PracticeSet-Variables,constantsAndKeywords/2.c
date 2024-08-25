// Calculate the area of a circle and modify the same programme to calculate the volume of a cylinder given its radius and height

#include <stdio.h>

int main() {
    int r=6;
    int h=10;
    printf("The area of a circle with radius %d is : %f\n",r,3.14*r*r);
    printf("The volume of a cylinder with radius %d and height %d is : %f",r,h,3.14*r*r*h);
    
    return 0;
}