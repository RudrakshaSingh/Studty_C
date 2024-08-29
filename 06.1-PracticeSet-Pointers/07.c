// Write a program to print the value of a variable i by using “pointer to pointer” type 
// of variable.

#include <stdio.h>

//function prototype
void change_to_thirty_times(int);

void change_to_thirty_times(int a){
    a = a * 10;
}

int main(){
    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_thirty_times(x);
    printf("The value of x is %d\n", x);

    return 0;
}