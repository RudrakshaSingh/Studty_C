//dynamic mem allocation done with
// 1. malloc()   =>malloc stands for memory allocation. It takes number of bytes to be allocated as an 
                // input and returns a pointer of type void.
                //initial value is garbage

// 2. calloc()   =>calloc stands for continuous allocation. It initializes each memory block with a default 
                // value of 0.
                //initial value is 0

// 3. free()     =>We can use free() function to deallocate the memory. The memory allocated using 
                //calloc/malloc is not deallocated automatically.
     //needed when you work in very low program in very small size, you use 1 byte and free it during the program in is execution

// 4. realloc()  =>Sometimes the dynamically allocated memory is insufficient or more than required.
                //realloc is used to allocate memory of new size using the previous pointer and size.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);

    // int arr[n]; // Not allowed in c
    ptr = (int*) malloc(n * sizeof(int));
//malloc return null pointer , we need int pointer therefore need typecasting

    ptr[0] = 3;
    ptr [1]= 6;
    printf("%d", ptr[0]);
    return 0;
}