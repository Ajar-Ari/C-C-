#include <stdio.h>

int main(void){
    int a;
    int i;
    int count3=0;

    for(i=1;i<=10;i++){
        scanf("%d", &a);

        if(a%3==0){
            count3++;
        }
        if(a%5==0){
            count5++;
        }
    int count5=0;
        printf("Multiples of 3 : %d\n",count3);
        printf("Multiples of 5 : %d\n",count5);
    }
    return 0;
}
