#include <stdio.h>

int main(void){
    int a;

    scanf("%d",&a);
    if(a%2==0) {
        printf("Happy.");
    }
    else(a%2==1) {
        printf("Lonely.");
    }
    return 0;
}
