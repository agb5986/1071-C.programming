#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    double x1, x2;
    printf("find roots for equation:a x^2 + b x + c =0\n");
    printf("Enter a b c: ");//��J�Y��
    scanf("%d %d %d", &a, &b, &c);//�x�s�Y��

    if(b*b-4*a*c>=0){          //�]�w�P�O������
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);//�p��x1
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);//�p��x2
        printf("For equation %d x^2 %d x + %d =0, two roots are\nx1 = %.1f\nx2 = %.1f", a, b, c, x1, x2);//��X����1
    }
    else{
        printf("no real roots\n");//����2�A��X:�L��Ƹ�
    }
    return 0;
}
