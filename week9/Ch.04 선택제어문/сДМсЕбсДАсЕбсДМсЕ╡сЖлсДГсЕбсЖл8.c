#include <stdio.h>

int main(void) {
    double score;

    scanf("%lf", &score);

    switch ((int)score) {
        case 4:
            printf("scholarship");
            break;
        case 3:
            printf("next semester");
            break;
        case 2:
            printf("seasonal semester");
            break;
        default:
            printf("retake");
            break;
    }

    return 0;
}
