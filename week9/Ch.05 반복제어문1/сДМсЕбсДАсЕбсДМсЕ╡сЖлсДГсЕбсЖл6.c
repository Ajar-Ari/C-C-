#include <stdio.h>

int main(void){
    int a;

    for(;;){
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? ");

        scanf("%d",&a);
        
        switch (a){
            case 1:
                printf("Seoul\n");
                break;
            case 2:
                printf("Washington\n");
                break;
            case 3:
                printf("Tokyo\n");
                break;
            case 4:
                printf("Beijing");
            default:
                printf("none");
        }
    }   
}
