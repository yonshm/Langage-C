#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter how much students do you have : ");
    scanf("%d",&n);
    float *arr = (float *)malloc(sizeof(float) * n);
    if(arr == NULL){
        printf("Allocation failed");
        exit(0);
    }
    for(int i = 0;i<n;i++){
        printf("Enter the score of student number %d :", i+1);
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("score of the student number %d is : %.2f\n",i+1,arr[i]);
    }
    free(arr);
}