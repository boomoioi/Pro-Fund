#include <stdio.h>


int main(){
    int a, divider;
    printf("Enter number : ");
    scanf("%d", &a);
    divider = 2;
    while(divider < a){
        if(a%divider == 0){
            printf("%d * ", divider);
            a /= divider;
        } else {
            divider += 1;
        }
    }
    printf("%d", a);
    return 0;
}

