#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

int main(){
    float x = 15.223456;
    float y = 12.11;
    printf("%f\n", floor(x)); // round down to nearest integer
    printf("%f\n", ceil(x)); // round up to nearest integer
    printf("%f\n", round(x)); // round to nearest integer
    printf("%f\n", fmod(x , y)); // x module y
}