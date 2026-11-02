#include <stdio.h>

int main(void){
    int a;
    for(;;){
    scanf("%d",&a);
        if(a==0){
            break;
        }
        else if(a>0){
            printf("Positive number\n");
        }

        else{
            printf("Negative number\n");
        }
    }
    return 0;
};
