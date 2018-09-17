#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter temperature in C: ");//提示輸入攝氏溫度數值
    scanf("%f",&C);//儲存溫度數值
    F=C*9/5+32;//換算方式
    printf("%.1f C = %.1f F\n\n",C,F);//輸出華氏溫度數值


    printf("Enter temperature in F: ");//提示輸入華氏溫度數值
    scanf("%f",&F);//儲存溫度數值
    C=(F-32)*5/9;//換算方式
    printf("%.1f F = %.1f C",F,C);//輸出攝氏溫度數值
    return 0;
}
