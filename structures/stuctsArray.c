#include <stdio.h>
#include <string.h>


typedef struct{
    char model[50];
    int year;
    float price;
}Car;

int main(){
    Car cars[] = {{"mustang", 2020, 325000},
                    {"dacia", 2024, 125000},
                    {"Honda", 2020, 320500}
                    };
    int numberCars = sizeof(cars) / sizeof(cars[0]);
    for(int i = 0;i<numberCars;i++){
        printf("Model :%s Year:%d Price:%.2f\n", cars[i].model,cars[i].year, cars[i].price);
    }
    return 0;
}