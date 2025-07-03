#include <stdio.h>
#include <stdlib.h>

int main(){
    // printf("Enter your age : ");
    // int age;
    // scanf("%d", &age);

    // if(age >= 70){
    //     printf("You are a senior");
    // }else if (age >=18){
    //     printf("You are an adult"); 
    // }else if(age >0){
    //     printf("You are a child"); 
    // }else{
    //     printf("you didn't born yet");
    // }
    char name[5];
    fgets(name,sizeof(name),stdin);
    printf("%s", name);
}