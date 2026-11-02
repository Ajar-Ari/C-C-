#include <stdio.h>

int main(void){
    int num=1;
    int sum=0;

    for(num=1; num<=10; num++){
        sum += num;
    }
    printf("sum = %d\n",sum);

    return 0;
    printf("num = %d",num); //11에 반복문 종료
}
