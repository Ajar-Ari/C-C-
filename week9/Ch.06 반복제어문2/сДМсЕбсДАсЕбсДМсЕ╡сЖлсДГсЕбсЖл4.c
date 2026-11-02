#include <stdio.h>

int main(void){
    int a;
    int sum=0;
    int i;

    scanf("%d",&a);
    for(i=a;i<=100;i++){
        sum +=i;
    }
    printf("%d",sum);

    return 0;
}
