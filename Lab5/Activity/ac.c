#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++){
        if(s[i]>='A' && s[i]<='Z'){
            printf("%c", s[i]);
        }
        
    }
    return 0;
}