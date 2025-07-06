#include <stdio.h>

int main(){
    int columns;
    int rows;
    char character;

    printf("Enter number of columns : ");
    scanf("%d", &columns);

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    printf("Enter the character : ");
    scanf(" %c", &character);

    for(int i = 0;i<rows;i++){
        for(int j=0;j<=columns;j++){
            printf("%c",character);
        }
        printf("\n");
    }
}