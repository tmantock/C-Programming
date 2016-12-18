#include <stdio.h>

int main(){
    int raining = 1;
    int tired = 1;
    int age = 18;

    if(raining != 1)
        printf("Dude it's not raining in Seattle? \n");

    if(raining == 1 && tired == 1){
        printf("It is raining get warm. \n");
    } else {
        printf("Get to work. \n");
    }

    if( age >= 18){
        printf("You are an adult \n");
    } else {
        printf("You're young one \n");
    }
}