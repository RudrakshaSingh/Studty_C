#include <stdio.h>

// In your C code, line 3 (int change(int a);) is a function prototype for change. This line is not strictly necessary 
// for the code to work, but it's good practice to include it.
//without prototype function works if you ve written it before main
int change(int a);

int change(int a) {
    //isse b ki address nhi mili but b ki copy mili hai
    a = 77; // Misnomer
    return 0;
}

int main(){
    int b=22;
    //change ko b nhi mila b ki value mili
    change(b); // The value of b remains 22 //does not change value
    
    printf("b is %d", b); 

    return 0;
}