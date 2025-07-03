#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\tWeight Converter Calculator \n");
    printf("\t1-Kilograms to Pounds\n");
    printf("\t2-Pounds to Kilograms\n");
    printf("\tEnter Your Choice : ");
    int choice;
    scanf("%d", &choice);

    float kilograms ,pounds;
    
    while (1){

        switch (choice){
            case 1:
            printf("\tEnter weight in Kilograms : ");
            scanf("%f", &kilograms);
            pounds = kilograms * 2.20462;
            printf("%.2f kilograms equal to %.2f pounds", kilograms,pounds);
            break;
            case 2 : 
                printf("\tEnter weight in Pounds : ");
                scanf("%f", &pounds);
                kilograms = pounds  / 2.20462;
                printf("%.2f pounds equal to %.2f kilograms", pounds,kilograms);
                break;
            case 0 : 
                printf("Good Bye");
                exit(0);
            default : 
                printf("\tInvalid choice, Enter 1 or 2 : \n");
                scanf("%d", &choice);
    }
}
}
