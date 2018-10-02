#include <stdio.h>

int main()
{
    int choice, height, width,type;
    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d", &choice);
        if(choice==3)//設定離開指令
            break;
        switch(choice)//兩類主情形
        {
        case 1://選擇印出矩形
            printf("Enter height and width: ");
            scanf("%d %d", &height,&width);//存入高及寬
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=width; j++)
                {
                    if(i==1 || i==height || j==1 || j==width)//設定空心矩形

                        printf("*");
                    else

                        printf(" ");//印出空心

                }
                printf("\n");//換行

            }

            break;//離開迴圈
        case 2://選擇印出三角形
            printf("Enter height and type: ");
            scanf("%d %d", &height, &type);
            if(type>=5 &&type<=0)//設定四類三角形，非此四類，結束程序
                break;
            switch(type)//四類情形
            {
            case 1:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=height; j++)
                    {
                        if(i==j||j==1 || i==height)//設定空心三角形
                            printf("*");
                        else
                            printf(" ");//空心
                    }
                    printf("\n");//換行

                }
                break;//結束
            case 2:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=height; j++)
                    {
                        if(i+j==height+1|| j==height||i==height)//設定第一類三角形左右顛倒
                            printf("*");
                        else
                            printf(" ");

                    }
                    printf("\n");
                }
                break;
            case 3:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=height; j++)
                    {
                        if(i+j==height+1|| j==1||i==1)//第一類三角形上下顛倒
                            printf("*");
                        else
                            printf(" ");

                    }
                    printf("\n");
                }
                break;
            case 4:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=height; j++)
                    {
                        if(j==height||i==j ||i==1)//第二類三角形上下顛倒
                            printf("*");
                        else
                            printf(" ");

                    }
                    printf("\n");
                }
                break;
            }

        }
    }
    return 0;
}
