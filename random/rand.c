#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max -min + 1) + min);

    do{
        printf("Guess the number between %d - %d : ",max,min);
        scanf("%d",&guess);
        if(guess < answer){
            printf("TOO LOW!!\n");
        }else if(guess > answer){
            printf("TOO HIGH!!\n");
        }else{
            printf("CORRECT!!");
        }
        tries++;

    }while(answer !=guess);
    printf("The right answeris : %d\n",answer);
    printf("You guess it in %d tries", tries);


}