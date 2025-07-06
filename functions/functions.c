#include <stdio.h>

int square(int num){
    return num * num;
}

int main(){
    int x = 2;
    int y = 3;
    int z = 4;

    printf("Square X : %d\n", square(x));
    printf("Square Y : %d\n", square(y));
    printf("Square Z : %d\n", square(z));
}