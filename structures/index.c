#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

int main(){
    Student std1 = {"Younes", 21, 16.07, true};
    Student std2 = {0}; //if we didn't asign any value to the struct , a random data from previous programs will be printed, 
                  //so to avoid that we have to assign 0 to it.

    // printf("Student Number 1");
    // printf("%s\n",std1.name);
    // printf("%d\n",std1.age);
    // printf("%.2f\n",std1.gpa);
    // printf("%s\n",std1.isFullTime ? "yes" : "No");

    // printf("Student Number 2");
    // printf("%s\n",std2.name);
    // printf("%d\n",std2.age);
    // printf("%.2f\n",std2.gpa);
    // printf("%s\n",std2.isFullTime ? "yes" : "No");

    Student std3;
    std3.age = 15;
    std3.gpa = 45;
    std3.isFullTime = true;
    strcpy(std3.name, "yassin");
    printf("%s\n",std3.name);
    printf("%d\n",std3.age);
    printf("%.2f\n",std3.gpa);
    printf("%d\n",std3.isFullTime);
}