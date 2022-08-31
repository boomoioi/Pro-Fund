#include<stdio.h>
int a;
int isPrime(int);

int main(){
    scanf("%d", &a);
    if(isPrime(a)==1){printf("Prime");}else{printf("Not Prime");}
    return 0;
}

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}