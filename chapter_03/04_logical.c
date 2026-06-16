#include <stdio.h>

int main() {
    int a=1; int b=0;;
        printf("The value of a and b is %d\n", a&&b);
        printf("The value of a or b is %d\n", a||b);
        printf("The value of not(a) is %d\n", !a);

        if(a && b){
            printf("Both a and b are true\n");
        }

        if(a){
            if(b){
                printf("a is true and b is true\n");
            }
        }
    return 0;
}