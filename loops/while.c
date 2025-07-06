#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// int main(){
//     char name[50];

//     printf("Enter your name : ");
//     fgets(name, sizeof(name), stdin);
//     name[strlen(name) - 1] = '\0';
//     while(strlen(name) == 0){
//         printf("Please Enter your name : ");
//         fgets(name, sizeof(name), stdin);
//         name[strlen(name) - 1] = '\0';
//     }
//     printf("%s", name);
// }

int main(){
    bool isRunnig = true;
    char response;

    while(isRunnig){
        printf("You are playing a game\n");
        printf("Would you like to continue (Yes = Y, No = N) : ");
        scanf(" %c", &response);
        if(response != 'Y' && response != 'y'){
            isRunnig = false;
        }
    }
    printf("You exit!");

}