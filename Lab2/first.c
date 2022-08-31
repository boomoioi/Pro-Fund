#include <stdio.h>

int main(){
    int a, divider;
    printf("Enter number : ");
    scanf("%d", &a);
    divider = 2;
    while(divider < a){
        if(a % divider == 0){
            printf("%d * ", divider);
            a /= divider;
        } else {
            divider += 1;
        }
    }
    printf("%d", a);
    return 0;
}

// 1. รับค่าตัวแปรเก็บไว้ที่ a
// 2. กำหนดค่าเริ่มต้น divider=2
// 3. ทำงานซ้ำเมื่อ divider น้อยกว่า a 
//     1. ถ้า a%divider เท่ากับ 0 
//         1. แสดงผลค่า divider
//         2. a=a/divider
//     2. ถ้าไม่ใช่ 
//         1. divider=divider+1
// 4. แสดงผลค่า a