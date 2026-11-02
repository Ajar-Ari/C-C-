#include <stdio.h>

int main(void){
    int a;

    scanf("%d",a);
    switch (a) {
        case A:
            printf("Excellent");
            break;
        case B:
            printf("Good");
            break;
        case C:
            printf("Usually");
            break;
    }
        default:
            printf("error");
            break;
    return 0;
}
