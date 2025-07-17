#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);
int main(){
    Student std1 = {"Youness", 21, 16, true};
    Student std2 = {"Amina", 22, 15.5, false};
    Student std3 = {"Omar", 20, 17.2, true};
    Student std4 = {"Sara", 23, 14.8, true};
    Student std5 = {"Hassan", 19, 18.0, false};
    Student std6 = {0};
    Student std7;
    strcpy(std7.name, "Amine");
    std7.age = 19;
    printStudent(std7);
    return 0;
}

void printStudent(Student student){
    printf("Name : %s\n", student.name);
    printf("Age : %d\n", student.age);
    printf("GPA : %.2f\n", student.gpa);
    printf("Full time Stident : %s\n", student.isFullTime ? "YES" : "NO");
}