#include<stdio.h>  
#include<string.h>  
#include<memory.h>  
#include<stdlib.h>  
#include<conio.h>  
#include<time.h>   
#include<windows.h>  
#define CX coord.X=x  
#define CY coord.Y=y  
#define SCP SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord)  
char map[60][30];  
struct node{  
    int x,y;  
}shen[1000];  
char xiang[4]={'w','a','s','d'};   
void dong();  
void gui();  
int kai();  
int youxi();  
int xuan();  
void jiesu();  
int main(void)  
{  
    COORD coord;  
    int x,y,xx,lp,kp,nan[4]={300,400,200,100};  
    system("color 74");  
    gui();  
    dong();  
    while (1)  
    {  
        lp=kai();  
        if (lp==2)  
        {  
            printf("\n\n\nлл����̰����!!\n��ӭ�´�����-.-\n");  
            return 0;  
        }  
        xx=xuan();  
        kp=youxi(nan[xx],xx);  
        x=51;y=14;  
        CX;CY;SCP;  
        printf("            ");//����Ϸ����ʾ�ĵ÷�...   
        if (kp==-1)  
        {  
            x=51;y=12;  
            CX;CY;SCP;  
            printf("��Ϸ���˳�-.-������ѡ��...");  
        }  
        else  
        {  
            x=51;y=12;  
            CX;CY;SCP;  
            printf("������Ϸ�÷�Ϊ��%d",kp*10*xx);  
        }  
    }  
    Sleep(100000);  
   
    return 0;  
    
}  
int xuan()//���ѳ̶�  
{  
    COORD coord;  
    int x,y,xx;  
    for (x=0;x<50;x++)  
    for (y=0;y<24;y++)  
    {  
        CX;CY;SCP;  
        printf(" ");  
    }  
    x=0;y=0;CX;CY;SCP;  
    printf("��ѡ����Ϸ���ѳ̶�:\n");  
    printf("1.��ģʽ\n");  
    printf("2.һ��ģʽ\n");  
    printf("3.����ģʽ\n");  
    scanf("%d",&xx);  
    return xx;  
    
}  
void dong()//��ʼ����   
{  
    COORD coord;  
    int x=20,y=11,i,R=24;  
    CX;CY;SCP;  
    printf("̰����!");   
    for (i=0;i<10;i++)  
    {  
        x=i;  
        for (y=x;y<R-x;y++)  
        {  
            coord.X=x*2;  
            coord.Y=y;  
            SCP;  
            printf("0 ");  
        }  
        x=(23-i);  
        for (y=i;y<=x;y++)  
        {  
            coord.X=x*2;  
            coord.Y=y;  
            SCP;  
            printf("0 ");   
        }  
        x=i;  
        for (y=x;y<R-x;y++)  
        {  
            coord.Y=x;  
            coord.X=y*2;  
            SCP;  
            printf("0 ");  
        }  
        x=(23-i);  
        for (y=i;y<=x;y++)  
        {  
            coord.Y=x;  
            coord.X=y*2;  
            SCP;  
            printf("0 ");  
        }  
        Sleep(100);  
    }  
    return ;  
    
}  
void gui()//��Ϸ����  
{  
    COORD coord;  
    int x=50,y;  
    for (y=0;y<26;y++)  
    {  
        CX;CY;SCP;  
        printf("|");  
    }  
    x=52;y=0;  
    CX;CY;  
    SCP;  
    printf("��Ϸ����:");  
    x=52;y=2;  
    CX;CY;SCP;  
    printf("1. w a s d ������̰���ߵķ�");  
    y=3;CX;CY;SCP;  
    printf("��.");  
    x=52;y=4;  
    CX;CY;SCP;  
    printf("2.��̰�����������������");  
    y=5;CX;CY;SCP;  
    printf("����.");  
    x=52;y=6;  
    CX;CY;SCP;  
    printf("3.��Ϸ�м䰴�ո������ͣ.");  
    x=52;y=8;  
    CX;CY;SCP;  
    printf("4.��Ϸ��ͣ�󣬰�'1'����Ϸ��");  
    y=9;CX;CY;SCP;  
    printf("������'0'����ص��տ�ʼ��Ϸ");  
    y=10;CX;CY;SCP;  
    printf("ʱ��ѡ�����.");  
    
}  
int kai()//��ʼ&&����  
{  
    COORD coord;  
    int x,y,lp;  
    for (x=0;x<50;x++)  
    for (y=0;y<24;y++)  
    {  
        CX;CY;SCP;  
        printf(" ");  
    }  
    x=0;y=0;CX;CY;SCP;  
    printf("1.��Ϸ��ʼ\n");  
    printf("2.��Ϸ����\n");  
    printf("��ѡ��:");  
    scanf("%d",&lp);  
    return lp;  
    
}  
int youxi(int xx,int bei)//��Ϸ����   
{  
      
    int x,y;  
    char ma[60][30];  
    COORD coord;  
    int i,R=50,D=24,ll=0,fen=0,p,wu=0,wux,wuy,fafe=0;  
    //fafe��1��0ģ�� bool ���ͣ�����R���ұ߽�  D���±߽�..   
    char zhiling,kp;  
    for (x=0;x<60;x++)  
    for (y=0;y<30;y++)  
    ma[x][y]=' ';  
    for (x=0;x<50;x++)  
    for (y=0;y<25;y++)  
    {  
        CX;CY;SCP;  
        printf(" ");  
    }  
    y=24;//��xΪ0-49,,yΪ0-23;       
    for (x=0;x<50;x++)  
    {  
        CX;CY;SCP;  
        printf("=");   
    }  
    shen[ll].x=rand()%8+20;  
    shen[ll++].y=rand()%6+10;  
    x=shen[ll-1].x;y=shen[ll-1].y;  
    CX;CY;SCP;  
    map[x][y]='+';  
    printf("+");  
    p=rand()%4;  
    if (xiang[p]=='w')  
    {  
        for (i=0;i<3;i++)  
        {  
            shen[ll].x=shen[ll-1].x;  
            shen[ll].y=shen[ll-1].y-1;  
            ll++;x=shen[ll-1].x;y=shen[ll-1].y;  
            CX;CY;SCP;map[x][y]='+';  
            printf("+");  
        }  
    }  
    else if (xiang[p]=='a')  
    {  
        for (i=0;i<3;i++)  
        {  
            shen[ll].x=shen[ll-1].x-1;  
            shen[ll].y=shen[ll-1].y;  
            ll++;x=shen[ll-1].x;y=shen[ll-1].y;  
            CX;CY;SCP;map[x][y]='+';  
            printf("+");  
        }  
    }  
    else if (xiang[p]=='s')  
    {  
        for (i=0;i<3;i++)  
        {  
            shen[ll].x=shen[ll-1].x;  
            shen[ll].y=shen[ll-1].y+1;  
            ll++;x=shen[ll-1].x;y=shen[ll-1].y;  
            CX;CY;SCP;map[x][y]='+';  
            printf("+");  
        }  
    }  
    else if (xiang[p]=='d')  
    {  
        for (i=0;i<3;i++)  
        {  
            shen[ll].x=shen[ll-1].x+1;  
            shen[ll].y=shen[ll-1].y;  
            ll++;x=shen[ll-1].x;y=shen[ll-1].y;  
            CX;CY;SCP;map[x][y]='+';  
            printf("+");  
        }  
    }  
    while (1)  
    {  
        wux=rand()%R;  
        wuy=rand()%D;  
        if (map[wux][wuy]!='+')  
        {  
            x=wux;y=wuy;  
            CX;CY;SCP;map[x][y]='#';  
            printf("#");  
            break;  
        }  
    }  
    while (1)  
    {  
        x=51;y=12;  
        CX;CY;SCP;  
        printf("�����ⷽ�����ʼ��Ϸ...");  
        if(kbhit())  
        {  
            kp=getch();  
            if (kp=='w'||kp=='a'||kp=='s'||kp=='d')  
            {  
                x=51;y=12;  
                CX;CY;SCP;  
                printf("                            ");  
                break;  
            }  
        }  
        Sleep(100);  
    }  
    while (1)  
    {  
        x=51;y=14;  
        CX;CY;SCP;  
        printf("�÷֣�%d",fen*10*bei);  
        if(kbhit())//kbhit�����ж��Ƿ��м�������   
        zhiling=getch();  
        if (zhiling!=xiang[p])  
        {  
            if (p<2&&zhiling!=xiang[p+2]||p>1&&zhiling!=xiang[p-2])//��Ȼ����ֱ�ӷ���ʱ,��ֱ������������   
            {  
                if (zhiling=='w')  
                p=0;  
                else if (zhiling=='a')  
                p=1;  
                else if (zhiling=='s')  
                p=2;  
                else if (zhiling=='d')  
                p=3;  
                else if (zhiling==' ')//��ͣ   
                {  
                    zhiling='1';//�ı�һ��-.-��Ȼһֱ��ͣ...   
                    while (1)  
                    {  
                        if(kbhit())  
                        {  
                            kp=getch();  
                            if (kp=='1')  
                            break;  
                            else if (kp=='0')  
                            {  
                                return -1;  
                            }  
                        }  
                          
                        Sleep(100);  
                    }  
                }  
            }  
              
        }  
        if (xiang[p]=='w')  
        {  
            shen[ll].x=shen[ll-1].x;  
            shen[ll].y=shen[ll-1].y-1;  
            ll++;x=shen[ll-1].x;y=shen[ll-1].y;  
            if (x==-1||x==R||y==-1||y==D||map[x][y]=='+')  
            {  
                fafe=1;  
                break;  
            }  
            if (map[x][y]=='#')  
            {  
                fen++;  
                wu=1;  
            }  
            CX;CY;SCP;map[x][y]='+';  
            printf("+");  
            if (!wu)  
            {  
                x=shen[0].x;y=shen[0].y;  
                CX;CY;SCP;map[x][y]=' ';  
                printf(" ");  
                for (i=0;i<ll-1;i++)  
                shen[i]=shen[i+1];  
                ll--;  
            }  
        }  
        else if (xiang[p]=='a')  
        {  
            shen[ll].x=shen[ll-1].x-1;  
            shen[ll].y=shen[ll-1].y;  
            ll++;x=shen[ll-1].x;y=shen[ll-1].y;  
            if (x==-1||x==R||y==-1||y==D||map[x][y]=='+')  
            {  
                fafe=1;  
                break;  
            }  
            if (map[x][y]=='#')  
            {  
                fen++;  
                wu=1;  
            }  
            CX;CY;SCP;map[x][y]='+';  
            printf("+");  
            if (!wu)  
            {  
                x=shen[0].x;y=shen[0].y;  
                CX;CY;SCP;map[x][y]=' ';  
                printf(" ");  
                for (i=0;i<ll-1;i++)  
                shen[i]=shen[i+1];  
                ll--;  
            }  
        }  
        else if (xiang[p]=='s')  
        {  
            shen[ll].x=shen[ll-1].x;  
            shen[ll].y=shen[ll-1].y+1;  
            ll++;x=shen[ll-1].x;y=shen[ll-1].y;  
            if (x==-1||x==R||y==-1||y==D||map[x][y]=='+')  
            {  
                fafe=1;  
                break;  
            }  
            if (map[x][y]=='#')  
            {  
                fen++;  
                wu=1;  
            }  
            CX;CY;SCP;map[x][y]='+';  
            printf("+");  
            if (!wu)  
            {  
                x=shen[0].x;y=shen[0].y;  
                CX;CY;SCP;map[x][y]=' ';  
                printf(" ");  
                for (i=0;i<ll-1;i++)  
                shen[i]=shen[i+1];  
                ll--;  
            }  
        }  
        else if (xiang[p]=='d')  
        {  
            shen[ll].x=shen[ll-1].x+1;  
            shen[ll].y=shen[ll-1].y;  
            ll++;x=shen[ll-1].x;y=shen[ll-1].y;  
            if (x==-1||x==R||y==-1||y==D||map[x][y]=='+')  
            {  
                fafe=1;  
                break;  
            }  
            if (map[x][y]=='#')  
            {  
                fen++;  
                wu=1;  
            }  
            CX;CY;SCP;map[x][y]='+';  
            printf("+");  
            if (!wu)  
            {  
                x=shen[0].x;y=shen[0].y;  
                CX;CY;SCP;map[x][y]=' ';  
                printf(" ");  
                for (i=0;i<ll-1;i++)  
                shen[i]=shen[i+1];  
                ll--;  
            }  
        }  
        if (wu)  
        {  
            while (1)  
            {  
                wux=rand()%R;  
                wuy=rand()%D;  
                if (map[wux][wuy]!='+')  
                {  
                    x=wux;y=wuy;  
                    CX;CY;SCP;map[x][y]='#';  
                    printf("#");  
                    break;  
                }  
            }  
            wu=0;  
        }  
        if (fafe)  
        break;  
        Sleep(xx);//sleep�������ܣ� ִ�� ����(��ͣ)һ��ʱ��     ��Ϊsleep (��)  Sleep  (����)   �� usleep (΢��)  �������Ҫ   
    }  
    jiesu();  
    return fen;  
    
}  
void jiesu()//������ʾ   
{  
    COORD coord;  
    int xx=20,yy=11,x,y,i,j;  
    for (i=0;i<6;i++)  
    {  
        x=xx+i;  
        for (j=0;j<3;j++)  
        {  
            y=yy+j;  
            CX;CY;SCP;  
            printf(" ");  
        }  
    }  
    x=20;y=11;CX;CY;SCP;  
    printf(">_>��Ϸʧ��");  
    Sleep(2000);  
    
}  