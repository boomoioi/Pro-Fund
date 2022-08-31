#include <stdio.h>

int main(){
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    
    // first line
    for(int i=0; i<a; i++) {
        printf("*");
    }
    printf("\n");

    // line with white space
    for(int i=0; i<a-2; i++){
        printf("*");
        for(int j=0; j<a-2; j++){
            printf(" ");
        }
        printf("*\n");
    }

    // last line 
    for(int i=0; i<a; i++) {
        printf("*");
    }
    return 0;
}

// 1. รับค่าเก็บไว้ที่ตัวแปร a
// 2. ทำซ้ำจำนวน a ครั้ง
//     1. แสดงผล *
// 3. แสดงผลขึ้นบรรทัดใหม่
// 4. ทำซ้ำจำนวน a-2 ครั้ง
//     1. แสดงผล *
//     2. ทำซ้ำจำนวน a-2 ครั้ง
//         1. แสดงผลเว้นวรรค
//     3. แสดงผล * และขึ้นบรรทัดใหม่
// 5. ทำซ้ำจำนวน a ครั้ง
//     1. แสดงผล *
