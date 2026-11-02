#include <stdio.h>

int main(void){
    int height;
    int tall;
    int sum;

    scanf("%d %d",&tall, &height);
    sum=height+100-tall;
    printf("%d\n",sum);
    if(sum>0){
        printf("Obesity\n");
        printf("Need control");
    }
    return 0;
}
