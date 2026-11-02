#include <stdio.h>

int main(void){
    int score;

    scanf("%d",&score);
    if(score>=80) {
        printf("Passed.");
    }
    else {
        printf("Failed.");
    }
    return 0;
}
