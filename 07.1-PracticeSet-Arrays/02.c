// If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False.    //ans will point to 4th
// (iii) Depends.

#include <stdio.h>

int main(){
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5* (i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of 5 X %d = %d \n", i+1, arr[i]);
    }
    

    return 0;
}