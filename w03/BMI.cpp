#include <stdio.h>


int main(){

    double Kg= 0.0 , M= 0.0, BMI= 0.0;
    printf("輸入身高(m):");
    scanf("%lf",&M);
    printf("輸入體重(Kg):");
    scanf("%lf",&Kg);
    BMI=Kg/(M*M);
    while(Kg>=0 && M>=0){
            if(BMI <18.5){
                printf("你的BMI為: %.1lf \n",BMI);
                printf("你的體重過輕\n");
            }
            else if(BMI>=18.5 && BMI<24 ){
                printf("你的BMI為: %.1lf \n",BMI);
                printf("你的體重正常\n");
            }
            else if(BMI>=24 && BMI<27 ){
                printf("你的BMI為: %.1lf \n",BMI);
                printf("你的體重過重\n");
            }
            else if(BMI>=27 && BMI<30 ){
                printf("你的BMI為: %.1lf \n",BMI);
                printf("你的體重輕度肥胖\n");
            }
            else if(BMI>=30 && BMI<35 ){
                printf("你的BMI為:%.1lf \n",BMI);
                printf("你的體重中度肥胖\n");
            }
            else if(BMI>=35 ){
                printf("你的BMI為:%.1lf \n",BMI);
                printf("你的體重重度肥胖\n");
            }
            printf("輸入身高(m):");
            scanf("%lf",&M);
            printf("輸入體重(Kg):");
            scanf("%lf",&Kg);
        }


        return 0;


    }
