// What will the following line produce in a C program:

#include <stdio.h>

int main(){
    int a = 4; 

    //evalustion order right to left hota hai print mai
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4
    return 0;
}