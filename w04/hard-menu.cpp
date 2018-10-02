#include <stdio.h>
void prchar(char c, int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("%c",c);
    }
}
void drawRect(int height,int width, int filled)//設定函式庫
{
    if(filled)
    {
        for(int i=1; i<=height; i++)
        {
            prchar('*',width);
            printf("\n");
        }
        printf("\n");//換行
    }


    else
    {

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
    }
}
void drawVerTri(int height, int type,int filled)
{
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',i);
                printf("\n");
            }

        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=height; j++)
                {

                    if(i==height || i==j||j==1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        break;
    case 2:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i);
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {
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
        }
    case 3:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',height-i+1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=height; j>=1; j--)
                {
                    if(i==1 || i==j||j==height)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
    case 4:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',i-1);
                prchar('*',height-i+1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=height; j++)
                {
                    if(j==height|| j==i||i==1)//設定第一類三角形左右顛倒
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
    }
}
void drawTsoTri(int height, int type,int filled)
{
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i);
                prchar('*',2*i-1);
                printf("\n");
            }
        }
        else{
            for(int i=1; i<=height; i++){
                prchar(' ',height-i);
                printf("*");
                prchar('*',i-2);
                printf("*");
                printf("\n");
            }

        }
    case 2:
        if(filled){
            for(int i=height; i<=1; i--)
            {
                prchar(' ',height-i);
                prchar('*',2*i-1);
                printf("\n");
            }
        }

    }
}

int main()
{
    int choice, height, width, type, filled,row;
    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Tsosceles Triangle\n");
        printf("4. Exit\n");
        printf("=> ");
        scanf("%d", &choice);
        if(choice==4)//設定離開指令
            break;
        switch(choice)//兩類主情形
        {
        case 1://選擇印出矩形
            printf("Enter height, width, filled: ");
            scanf("%d %d %d", &height, &width, &filled);//存入高及寬
            drawRect(height,width,filled);
            break;//離開迴圈
        case 2://選擇印出三角形
            printf("Enter height, type, filled: ");
            scanf("%d %d %d", &height, &type, &filled);

            switch(type)//四類情形
            {
            case 1:
                drawVerTri(height,type,filled);
                break;//結束
            case 2:
                drawVerTri(height,type,filled);
                break;//結束
            case 3:
                drawVerTri(height,type,filled);
                break;//結束
            case 4:
                drawVerTri(height,type,filled);
                break;//結束
            }
        case 3:
            printf("Enter height, type, filled: ");
            scanf("%d %d %d", &height, &type, &filled);

            switch(type)
            {
            case 1:
                drawTsoTri(height, type, filled);
                break;
            case 2:
                drawTsoTri(height, type, filled);
                break;
            }

        }
    }
    return 0;
}
