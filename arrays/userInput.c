#include <stdio.h>

int main(){
    int scores[5] = {0};
    for(int i = 0;i <5;i++){
        printf("Enter a number : ");
        scanf("%d",&scores[i]);
    }
    for(int j = 0;j < 5;j++){
        printf("%d ",scores[j]);
    }
}