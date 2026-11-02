#include <stdio.h>

int main(void){
    int a;
    int count=0;

    for(;;){
        scanf("%d",&a);
        if(a==0){
            break;
        }
        if(a%3!=0 && a%5!=0){
            count++;       
        }
    }
    printf("%d",count);
    return 0;
}
