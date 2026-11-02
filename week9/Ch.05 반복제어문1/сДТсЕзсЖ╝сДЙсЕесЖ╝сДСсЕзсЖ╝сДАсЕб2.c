#include <stdio.h>

int main(void){
    int a;

    for(;;){
        scanf("%d",&a);
        if(a==0){
           break;
        }
    int Odd=0;
    int Even=0;
        if (a%2 != 0){
            Odd++;
        }
        if (a%2 == 0){
            Even++;
        }
    }
    printf("odd : %d\n",Odd);
    printf("even : %d\n",Even);

    return 0;
}
