#include <stdio.h>
#include <windows.h>

int main(){


    // for(int i = 10;i>=0;i--){
    //     Sleep(1000);
    //     printf("%d\n", i);
    // }
    // printf("Happy new year!!");


    for(int i = 1; i<=10;i++){
        for(int j = 0; j<=10;j++){
            Sleep(100);
            printf("%3d ", j * i);
        }
        printf("\n");
    }
}