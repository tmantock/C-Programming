#include <stdio.h>

int main(){
    int raining = 1;
    int tired = 1;

    if(raining != 1)
        printf("Dude it's not raining in Seattle? \n");

    if(raining == 1 && tired == 1){
        printf("It is raining get warm. \n");
    } else {
        printf("Get to work. \n");
    }
}