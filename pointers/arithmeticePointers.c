#include <stdio.h>

int main(){
    int x = 5;
    int *ptrX = &x;
    printf("Adress memory of x: %u\n", ptrX);
    ptrX++; // ptrx = ptrx + 4 / 4bytes will be added
    printf("Adress memory of x++: %u\n", ptrX);
    
    ptrX--; // ptrx = ptrx - 4 / 4bytes will be subs
    printf("Adress memory of x--: %u\n", ptrX);

    ptrX+=5; // ptrx = ptrx + sizeOf(int) * 5;
    printf("Adress memory of x + 5: %u\n", ptrX);

    ptrX-=5; // ptrx = ptrx - sizeOf(int) * 5;
    printf("Adress memory of x - 5: %u\n", ptrX);
}