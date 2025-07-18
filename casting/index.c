#include <stdio.h>

int main(){
    float x = 3.14;
    void *ptr;
    ptr = &x;
    // printf("%f", *(float*)ptr);
    printf("%d",sizeof(float));
}