#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice(){
    return (rand() % 3) + 1;
}

int userChoice(){
    int choice;
    do{
        printf("1-PAPER\n");
        printf("2-ROCK\n");
        printf("3-SCISSORS\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
    }while(choice < 1 || choice > 3);
    
    return choice;
}

void checkTheWinner(int userChoice, int computerChoice){
    switch(userChoice){
        case 1 :
            printf("Your choice is paper\n");
            break;
        case 2 : 
            printf("Your choice is rock\n");
            break;
        case 3:
            printf("Your choice is scissor\n");
            break;
    }
    switch(computerChoice){
        case 1 :
            printf("Computer choice is paper\n");
            break;
        case 2 : 
            printf("Computer choice is rock\n");
            break;
        case 3:
            printf("Computer choice is scissors\n");
            break;
    }
    if(userChoice == 1 && computerChoice==2){
        printf("YOU WIN!!");
    }else if(userChoice == 2 && computerChoice==3){
        printf("YOU WIN!!");
    }else if(userChoice == 3 && computerChoice==1){
        printf("YOU WIN!!");
    }else if(userChoice == computerChoice){
        printf("Its a tie!!");
    }
    else{
        printf("Computer Wins!!");
    }
}

int main(){
    srand(time(NULL));
    int userchoice = userChoice();
    int computerchoice = getComputerChoice();
    checkTheWinner(userchoice,computerchoice);
}