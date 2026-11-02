#include <stdio.h>

int main(void){
    int a;

    scanf("%d",&a);
    if(a>=90){
        printf("Excellent");
    }
    else if(a>=80){
        printf("Good");
    }
    else if(a>=70){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    
    return 0;
}
