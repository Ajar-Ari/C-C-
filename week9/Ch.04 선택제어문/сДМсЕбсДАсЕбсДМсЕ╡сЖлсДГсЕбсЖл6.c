#include <stdio.h>

int main(void){
    int a;

    scanf("%d",&a);
    if(a>0){
        if(a%2==0){
            printf("Even Number");
        }
        else{
            printf("Odd Number");
    }
        }
    else{
        printf("Non positive");
    }
    return 0;
}
