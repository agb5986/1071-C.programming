#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    double x1, x2;
    printf("find roots for equation:a x^2 + b x + c =0\n");
    printf("Enter a b c: ");//輸入係數
    scanf("%d %d %d", &a, &b, &c);//儲存係數

    if(b*b-4*a*c>=0){          //設定判別式情形
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);//計算x1
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);//計算x2
        printf("For equation %d x^2 %d x + %d =0, two roots are\nx1 = %.1f\nx2 = %.1f", a, b, c, x1, x2);//輸出情形1
    }
    else{
        printf("no real roots\n");//情形2，輸出:無實數解
    }
    return 0;
}
