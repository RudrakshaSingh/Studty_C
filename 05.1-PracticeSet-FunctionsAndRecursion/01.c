// Write a programme using function to find average of three numbers

#include <stdio.h>

    float average(int a,int b ,int c);

float average(int a,int b ,int c){
    return (a+b+c)/3.0;//need to make int with float
}

int main() {
    int a=3,b=6,c=5;
    printf("The avearge of a,b,c is %f",average(a,b,c));

    return 0;
}