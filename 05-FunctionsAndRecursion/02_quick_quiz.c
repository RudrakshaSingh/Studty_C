//Write a programme with three functions
//Good morning function which prints good morning function which prints "good morning"
//Good afternoon function which prints good morning function which prints "good afternoon"
//Good night function which prints good morning function which prints "good night"


#include <stdio.h>

void good_morning();
void good_afternoon();
void good_evening();


void good_morning(){
    printf("good morning\n");
}

void good_afternoon(){
    printf("good afternoon\n");
}

void good_evening(){
    printf("good evening\n");
}

int main(){
    good_morning();
    good_afternoon();
    good_evening();
    return 0;
}