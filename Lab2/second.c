#include <stdio.h>

int main(){
    int fNum, sNum, res=1;
    printf("Enter first number : ");
    scanf("%d", &fNum);
    printf("Enter second number : ");
    scanf("%d", &sNum);
    while(res < fNum && res < sNum){
        if(fNum % res == 0 && sNum % res == 0){
            if(fNum < sNum){
                printf("Greatest common divisor = %d", fNum/res);   
            } else {
                printf("Greatest common divisor = %d", sNum/res); 
            }
            return 0;
        }
        res++;
    }
    printf("No common divisor");
    return 0;
}

// 1. กำหนด res=1
// 2. รับค่าตัวแปรเก็บไว้ที่ fNum
// 3. รับค่าตัวแปรเก็บไว้ที่ sNum
// 4. ทำซ้ำเมื่อ res<fNum และ res<sNum
//     1. ถ้า fNum%res = 0 และ sNum%res = 0
//         1. ถ้า fNum น้อยกว่า sNum
//             1. แสดงผลค่า fNum/res
//         2. ถ้าไม่ใช่
//             1. แสดงผลค่า sNum/res
//         2. จบการทำงาน
//     2. res=res+1
// 5. แสดงผลว่าไม่มีตัวหารร่วม