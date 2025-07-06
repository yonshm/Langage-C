#include <stdio.h>
#include <stdlib.h>

int main(){
    float x,y,result;
    char operator;
        printf("Enter number one :");
        scanf("%f", &x);

        
        printf("Enter number two :");
        scanf("%f", &y);

        printf("Enter operator( + - * /)\n");
        scanf(" %c", &operator);

        switch (operator){
            case '+' : 
                result = x + y;
                break;
            case '-' : 
                result = x - y;
                break;
            case '/' : 
                if(y == 0){
                    printf("Can't devide by zero");
                }else{

                    result = x / y;
                }
                break;
            case '*' : 
                result = x * y;
                break;
            default : 
                printf("Enter a valid choice\n");
        }
        printf("Result : %.2f", result);
    }