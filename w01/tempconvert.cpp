#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter temperature in C: ");//��ʾݔ��z�ϜضȔ�ֵ
    scanf("%f",&C);//����ضȔ�ֵ
    F=C*9/5+32;//�Q�㷽ʽ
    printf("%.1f C = %.1f F\n\n",C,F);//ݔ���A�ϜضȔ�ֵ


    printf("Enter temperature in F: ");//��ʾݔ���A�ϜضȔ�ֵ
    scanf("%f",&F);//����ضȔ�ֵ
    C=(F-32)*5/9;//�Q�㷽ʽ
    printf("%.1f F = %.1f C",F,C);//ݔ���z�ϜضȔ�ֵ
    return 0;
}
