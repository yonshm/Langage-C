#include <stdio.h>

typedef enum{SUCCESS,FAILURE,PENDING}STATUS;
void connectStatus(STATUS status);
int main(){
    STATUS status = SUCCESS;
    connectStatus(status);

    return 0;
}

void connectStatus(STATUS status){
    switch(status){
        case SUCCESS : 
            printf("Connection was successfull %d\n",SUCCESS); 
            break;
        case FAILURE:
            printf("Could not connect\n"); 
            break;
        case PENDING:
            printf("Connection was pending\n"); 
            break;
    }
}