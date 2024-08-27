//Writer programme to calculate the factorial of forgiven number using a for loop

#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1
    int product=1;
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        product *=i;
    }
    printf("The factorial of %d is %d",n, product);
    return 0;
}