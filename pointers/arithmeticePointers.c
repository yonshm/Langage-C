#include <stdio.h>

int main(){
    int x = 5;
    int y = 10;
    int *ptrX = &x;
    int *ptrY = &y;
    printf("Adress memory of x: %u\n", ptrX);
    ptrX++; // ptrx = ptrx + 4 / 4bytes will be added
    printf("Adress memory of x++: %u\n", ptrX);
    
    ptrX--; // ptrx = ptrx - 4 / 4bytes will be subs
    printf("Adress memory of x--: %u\n", ptrX);

    ptrX+=5; // ptrx = ptrx + sizeOf(int) * 5;
    printf("Adress memory of x + 5: %u\n", ptrX);

    ptrX-=5; // ptrx = ptrx - sizeOf(int) * 5;
    printf("Adress memory of x - 5: %u\n", ptrX);

    printf("Substraction of two pointers\n");
    printf("Adress memory of x: %u , Adress memory of y: %u\n", ptrX,ptrY);
    printf("ptrX - ptrY = %d\n", ptrX-ptrY); // result = (ptrx - ptrY) / sizeOf(int);  
}