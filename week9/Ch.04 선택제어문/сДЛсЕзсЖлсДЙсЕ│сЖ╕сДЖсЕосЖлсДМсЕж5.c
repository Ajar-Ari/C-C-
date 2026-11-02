#include <stdio.h>

int main(void){
    int a,b;

    scanf("%d %d",&a,&b);
    if(a>=4 && b>=4){
        printf("WIN.");
    }
    else if(a>=4 || b>4){
        printf("DRAW.");
    }
    else{
        printf("LOSE.");
    }

    return 0;
}
