#include <stdio.h>
void birthday(int *age);
int main(){
    int age = 21;
    int *pAge = &age;
    birthday(pAge);
    printf("%d", age);
}

void birthday(int *age){
    (*age)++;
}