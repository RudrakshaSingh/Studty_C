//Write a program  to print multiplication table of a given number N

#include <stdio.h>

int main(){
    int n;
    printf("Enter value : ");
    scanf("%d", &n);   

    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", n, i, n*i );
    }
   
    return 0;
}