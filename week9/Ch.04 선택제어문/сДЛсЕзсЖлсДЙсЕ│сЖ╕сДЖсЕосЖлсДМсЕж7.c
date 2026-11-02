#include <stdio.h>

int main(void){
    printf("1.ADD\n");
    printf("2.EDIT\n");
    printf("3.DEL\n");
    int a;

    printf("Select: ");

    scanf("%d",&a);

    printf("\n");

    switch (a) {
        case 1: 
    }

            break;
        case 2:
            printf("You selected ADD");
            printf("You selected EDIT");
            break;
        case 3:
            printf("You selected DEL");
            break;
    return 0;
}
