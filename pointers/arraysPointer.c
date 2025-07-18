#include <stdio.h>
void array2d(int arr[3][4]);
int main(){
    // int arr[3] = { 5, 10, 15 };
    // printf("%d", arr[0]);
    // printf("%d", *arr);

    int arr1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int arr2[2][3][2] = {{{5, 10}, {6, 11}, {7, 12}},
                        {{20, 30}, {21, 31}, {22, 32}}};
    array2d(arr1);

    
}
void array2d(int arr[3][4]){

    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
}

// void array3d(int arr[][][])