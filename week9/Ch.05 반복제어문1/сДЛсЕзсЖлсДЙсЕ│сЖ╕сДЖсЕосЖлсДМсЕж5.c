#include <stdio.h>

int main(void){
    int a;

    for(;;){
    int max=0;
    int min=101;
        scanf("%d",&a);
        if(a==0){
            break;
        }
        if(a>max){
        }
            max=a;
        if (a<min){
            min=a;
        }
    }
    printf("MAX=%d\n",max);
    printf("MIN=%d\n",min);

    return 0;
}
