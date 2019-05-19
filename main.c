#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<mmsystem.h>
int d=0,score=0;
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 50;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void boun(int left,int top,int left1,int top1,int del,char ch);
void db();
void db()
{
    switch (d)
    {
    case 0:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(41,13);
            printf("          ");
            gotoxy(41,11);
            printf("          ");
            gotoxy(41,12);
            printf("          ");
            d=1;
            score=score+10;
            break;
        }
    case 1:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(21,13);
            printf("          ");
            gotoxy(21,12);
            printf("          ");
            gotoxy(21,11);
            printf("          ");
            d=2;
            score=score+10;
            break;
        }
    case 2:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(11,13);
            printf("          ");
            gotoxy(11,12);
            printf("          ");
            gotoxy(11,11);
            printf("          ");
            d=3;
            score=score+10;
            break;
        }
    case 3:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(31,13);
            printf("          ");
            gotoxy(31,12);
            printf("          ");
            gotoxy(31,11);
            printf("          ");
            d=4;
            score=score+10;
            break;
        }
    case 4:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(61,13);
            printf("          ");
            gotoxy(61,12);
            printf("          ");
            gotoxy(61,11);
            printf("          ");
            d=5;
            score=score+10;
            break;
        }
    case 5:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(81,13);
            printf("          ");
            gotoxy(81,12);
            printf("          ");
            gotoxy(81,11);
            printf("          ");
            d=6;
            score=score+10;
            break;
        }
    case 6:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(101,13);
            printf("          ");
            gotoxy(101,12);
            printf("          ");
            gotoxy(101,11);
            printf("          ");
            d=7;
            score=score+10;
            break;
        }
    case 7:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(81,10);
            printf("          ");
            gotoxy(81,9);
            printf("          ");
            gotoxy(81,8);
            printf("          ");
            d=8;
            score=score+10;
            break;
        }
    case 8:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(51,13);
            printf("          ");
            gotoxy(51,12);
            printf("          ");
            gotoxy(51,11);
            printf("          ");
            d=9;
            score=score+10;
            break;
        }
    case 9:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(31,10);
            printf("          ");
            gotoxy(31,9);
            printf("          ");
            gotoxy(31,8);
            printf("          ");
            d=10;
            score=score+10;
            break;
        }
    case 10:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(11,10);
            printf("          ");
            gotoxy(11,9);
            printf("          ");
            gotoxy(11,8);
            printf("          ");
            d=11;
            score=score+10;
            break;
        }
    case 11:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(41,10);
            printf("          ");
            gotoxy(41,9);
            printf("          ");
            gotoxy(41,8);
            printf("          ");
            d=12;
            score=score+10;
            break;
        }
    case 12:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(61,10);
            printf("          ");
            gotoxy(61,9);
            printf("          ");
            gotoxy(61,8);
            printf("          ");
            score=score+10;
            gotoxy(71,10);
            printf("          ");
            gotoxy(71,9);
            printf("          ");
            gotoxy(71,8);
            printf("          ");
            score=score+10;
            gotoxy(71,13);
            printf("          ");
            gotoxy(71,12);
            printf("          ");
            gotoxy(71,11);
            printf("          ");
            d=13;
            score=score+10;
            break;
        }
    case 13:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(91,13);
            printf("          ");
            gotoxy(91,12);
            printf("          ");
            gotoxy(91,11);
            printf("          ");
            d=14;
            score=score+10;
            break;
        }
    case 14:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(91,10);
            printf("          ");
            gotoxy(91,9);
            printf("          ");
            gotoxy(91,8);
            printf("          ");
            score=score+10;
            gotoxy(101,10);
            printf("          ");
            gotoxy(101,9);
            printf("          ");
            gotoxy(101,8);
            printf("          ");
            d=15;
            score=score+10;
            break;
        }
    case 15:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(61,5);
            printf("          ");
            gotoxy(61,6);
            printf("          ");
            gotoxy(61,7);
            printf("          ");
            score=score+10;
            gotoxy(71,5);
            printf("          ");
            gotoxy(71,6);
            printf("          ");
            gotoxy(71,7);
            printf("          ");
            d=16;
            score=score+10;
            break;
        }
    case 16:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(31,5);
            printf("          ");
            gotoxy(31,6);
            printf("          ");
            gotoxy(31,7);
            printf("          ");
            d=17;
            score=score+10;
            break;
        }
    case 17:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(21,10);
            printf("          ");
            gotoxy(21,9);
            printf("          ");
            gotoxy(21,8);
            printf("          ");
            d=18;
            score=score+10;
            break;
        }
    case 18:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(51,10);
            printf("          ");
            gotoxy(51,9);
            printf("          ");
            gotoxy(51,8);
            printf("          ");
            d=19;
            score=score+10;
            break;
        }
    case 19:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(81,5);
            printf("          ");
            gotoxy(81,6);
            printf("          ");
            gotoxy(81,7);
            printf("          ");
            d=20;
            score=score+10;
            break;
        }
    case 20:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(91,5);
            printf("          ");
            gotoxy(91,6);
            printf("          ");
            gotoxy(91,7);
            printf("          ");
            score=score+10;
            gotoxy(101,5);
            printf("          ");
            gotoxy(101,6);
            printf("          ");
            gotoxy(101,7);
            printf("          ");
            d=21;
            score=score+10;
            break;
        }
    case 21:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(21,5);
            printf("          ");
            gotoxy(21,6);
            printf("          ");
            gotoxy(21,7);
            printf("          ");
            d=22;
            score=score+10;
            break;
        }
    case 22:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(51,5);
            printf("          ");
            gotoxy(51,6);
            printf("          ");
            gotoxy(51,7);
            printf("          ");
            d=23;
            score=score+10;
            break;
        }
    case 23:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(11,5);
            printf("          ");
            gotoxy(11,6);
            printf("          ");
            gotoxy(11,7);
            printf("          ");
            d=24;
            score=score+10;
            break;
        }
    case 24:
        {
            PlaySound(TEXT("C:\\Users\\vaibhav bahl\\Downloads\\br.wav"),NULL,SND_ASYNC);
            gotoxy(41,5);
            printf("          ");
            gotoxy(41,6);
            printf("          ");
            gotoxy(41,7);
            printf("          ");
            d=25;
            score=score+10;
            break;
        }
    }
}
int main()
{
    hidecursor();
    start:
    SetColor(10);
    boun(3,4,113,26,5,'$');
    gotoxy(23,13);
    SetColor(13);
    printf("W    W    W   EEEEEE   L        CCCCCC   OOOOOO   MM         MM   EEEEEE\n");
    gotoxy(23,14);
    printf("W   W W   W   E        L        C        O    O   M  M      M M   E     \n");
    gotoxy(23,15);
    printf("W  W   W  W   EEEEEE   L        C        O    O   M   M    M  M   EEEEEE\n");
    gotoxy(23,16);
    printf("W W     W W   E        L        C        O    O   M    M  M   M   E     \n");
    gotoxy(23,17);
    printf("WW       WW   EEEEEE   LLLLLL   CCCCCC   OOOOOO   M     M     M   EEEEEE\n");
    delay(2000);
    system("cls");
    SetColor(10);
    char ch;
    int top=25,co=0,co3=0,co4=0,t=0,co1=0,l1=0,l2=0,left=53,bl=57,bt=24,l3=21,l4=20,y=0,k=0,co5=0,u=0,co6=0,temp=4,h=0,m=0,count=12,coun=3,l=-7,j=0,live=0,live1=0,i=100,offset,ll=0,lt=0,lt1=0,LL1=0,li=0,c=80;
    boun(3,4,113,26,5,'$');
    gotoxy(45,10);
    printf("BRICK BREAKER");
    gotoxy(45,11);
    printf("DEVELOPED BY VAIBHAV BEHL");
    gotoxy(45,14);
    printf("GENERAL INSTRUCTIONS");
    gotoxy(45,16);
    printf("1 > PRESS A TO MOVE LEFT");
    gotoxy(45,17);
    printf("2 > PRESS D TO MOVE RIGHT");
    gotoxy(45,20);
    printf("When u are ready press enter");
    scanf("%c",&ch);
    if(ch=='\n')
    {
        goto start1;
    }
    start1:
    system("cls");
    boun(10,4,111,26,0,'!');
    gotoxy(50,3);
    printf("LET THE GAME BEGIN");
    SetColor(14);
    for(offset=11;offset<=110;offset=offset+10)
    {
        boun(offset,5,offset+9,7,0,'-');
    }
    SetColor(12);
    for(offset=11;offset<=110;offset=offset+10)
    {
        boun(offset,8,offset+9,10,0,'-');
    }
    SetColor(11);
    for(offset=11;offset<=110;offset=offset+10)
    {
        boun(offset,11,offset+9,13,0,'-');
    }
    SetColor(10);
    gotoxy(53,25);
    printf("==========");
    gotoxy(bl,bt);
    printf("O");
    gotoxy(44,20);
    printf("When u are ready press enter");
    scanf("%c",&ch);
    if(ch=='\n')
        {
            gotoxy(44,20);
            printf("                                ");
            while(coun!=-1)
            {
                delay(1000);
                gotoxy(52,20);
                printf("Starting in %d",coun);
                coun--;
            }
        }
        gotoxy(44,20);
        printf("                            ");
        while(1)
        {
            ball:
            gotoxy(bl,bt);
            printf(" ");
            if(live1<10)
            {
                if(bt>13)
                {
                    bl--;
                    bt--;
                    if(bt==22 && bl==11)
                    {
                        live=100;
                        live1=100;
                        goto one;
                    }
                    if(bt==14 && bl==47)
                    {
                        db();
                    }
                    else if(bt==14 && bl==25)
                    {
                        db();
                    }
                    live++;
                    live1++;
                }
            }
            else if(live==10)
            {
                bl--;
                bt++;
                if(bt==25)
                {
                    if(bl==left || bl==left+1 || bl==left+2 || bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7 || bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {

                        live=-1;
                        live1=-1;
                        goto ball;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            one:
            if(live==100 && live1==100)
            {
                if(lt<8)
                {
                    bt--;
                    bl++;
                    if(bt==14 && bl==19)
                    {
                        db();
                    }
                    else if(bt==14 && bl==41)
                    {
                        db();
                    }
                    else if(bt==14 && bl==63)
                    {
                        db();
                    }
                    else if(bt==14 && bl==85)
                    {
                        db();
                        i=500;
                    }
                    else if(bt==14 && bl==107)
                    {
                        db();
                    }
                    lt++;
                    ll++;
                }
                else if(ll==8)
                {
                    bt++;
                    bl++;
                    if(bt==16 && bl==109)
                    {
                        live=200;
                        live1=200;
                        lt=100;
                        ll=100;
                        i=0;
                        goto one1;
                    }
                }
                if(bt==25)
                {
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7|| bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {
                        ll=-3;
                        lt=-3;
                        goto one;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            one1:
            if(lt==100 && ll==100)
            {
                if(lt1<10)
                {
                    bt++;
                    bl--;
                    lt1++;
                }
                if(bt==25)
                {
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7 || bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {

                        lt=200;
                        ll=200;
                        lt1=11;
                        goto one2;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            i=0;
            one2:
            if(lt==200 && ll==200)
            {
                if(li<14)
                {
                    if(bt>11)
                    {
                        bl--;
                        bt--;
                        li++;
                        LL1++;
                        if(bl==86 && bt==11)
                        {
                            db();
                        }
                        if(bl==36 && bt==11)
                        {
                            db();
                        }
                        if(i==0)
                        {
                            if(bt==14 && bl==61)
                            {
                                db();
                                i=1;
                                li=14;
                                LL1=14;
                            }
                        }
                        if(bt==14 && bl==11)
                        {
                            li=100;
                            LL1=100;
                            goto one3;
                        }
                    }
                }
                else if(LL1==14)
                {
                    bl--;
                    bt++;
                    if(bt==25)
                    {
                        if(bl==left || bl==left+1 || bl==left+2 || bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7 || bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                        {

                            li=0;
                            LL1=0;
                            goto one2;
                        }
                        else{bt=bt+2;goto end;}
                    }
                }
            }
            one3:
            if(li==100 && LL1==100)
            {
                if(co<3)
                {
                    bt--;
                    bl++;
                    co++;
                    co1++;
                    if(bt==11 && bl==14)
                    {
                        db();
                    }
                    if(bt==11 && bl==42)
                    {
                        db();
                    }
                    if(bt==11 && bl==70)
                    {
                        db();
                    }
                    if(j==0)
                    {
                        if(bt==14 && bl==95)
                        {
                            db();
                            j=1;
                            co=3;
                            co1=3;
                        }
                    }
                    if(bt==21 && bl==110)
                    {
                        co=100;
                        co1=100;

                        goto one4;
                    }
                }
                else if(co1==3)
                {
                    bt++;
                    bl++;
                }
                if(bt==25)
                {
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7|| bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {
                        co=-11;
                        co1=-11;
                        goto one3;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            one4:
            if(co==100 && co1==100)
            {
                if(co3<10)
                {
                    bt--;
                    bl--;
                    co3++;
                    co4++;
                    if(bt==11 && bl==100)
                    {
                        db();
                    }
                    if(bt==8 && bl==69)
                    {
                        db();
                    }
                    if(bt==8 && bl==35)
                    {
                        db();
                    }
                    if(bt==18 && bl==11)
                    {
                        co3=100;
                        co4=100;
                        bl=bl+4;

                        goto one5;
                    }
                }
                else if(co4==10)
                {
                    bt++;
                    bl--;
                }
                if(bt==25)
                {
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7|| bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {
                        co3=l;
                        co4=l;
                        goto one4;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            one5:
            if(co3==100 && co4==100)
            {
                if(co5<7)
                {
                    bt--;
                    bl++;
                    co5++;
                    co6++;
                    if(bt==11 && bl==22)
                    {
                        db();
                    }
                    if(bt==11 && bl==50)
                    {
                        db();
                        l=-10;
                    }
                    if(bt==8 && bl==81)
                    {
                        db();
                    }
                    if(bt==13 && bl==110)
                    {
                        co5=100;
                        co6=100;
                        j=0;
                        i=0;
                        bl=bl-4;

                        goto one6;
                    }
                }
                else if(co6==7)
                {
                    bt++;
                    bl++;
                }
                if(bt==25)
                {
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7|| bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {
                        co5=l;
                        co6=l;
                        goto one5;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            one6:
            if(co5==100 && co6==100)
            {
                if(j<5)
                {
                    bt--;
                    bl--;
                    if(bt==8 && bl==101)
                    {
                        db();
                    }
                    j++;
                    k++;
                }
                else if(k==5)
                {
                    bt++;
                    bl--;
                }
                if(bt==25)
                {
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7|| bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {

                        j=100;
                        k=100;
                        goto one7;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            one7:
            if(j==100 && k==100)
            {
                if(h<20)
                {
                    bt--;
                    bl--;
                    h++;
                    m++;
                    if(u==0)
                        {
                            if(bt==8 && bl==27)
                            {
                                db();
                                u=1;
                                h=20;
                                m=20;
                            }
                        }
                    if(bt==23 && bl==11)
                    {
                        h=100;
                        m=100;
                        goto one8;
                    }
                }
                else if(m==20)
                {
                    bt++;
                    bl--;
                }
                if(bt==25)
                {
                    if(bt==25 && bl==10)
                    {
                        h=100;
                        m=100;
                        bl=bl+5;
                        goto one8;
                    }
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7|| bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {
                        h=0;
                        m=0;
                        goto one7;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            one8:
            if(h==100 && m==100)
            {
                if(y<20)
                {
                    bt--;
                    bl++;
                    if(bt==10 && bl==110)
                    {
                        y=100;
                        t=100;
                        bl=bl-7;
                        goto one9;
                    }
                    y++;
                    t++;
                }
                else if(t==20)
                {
                    bt++;
                    bl++;
                }
                if(bt==25)
                {
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7|| bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {
                        t=0;
                        y=0;
                        u=0;
                        goto one8;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            one9:
            if(y==100 && t==100)
            {
                if(l1<5)
                {
                    bt--;
                    bl--;
                    l1++;
                    l2++;
                    if(u==0)
                    {
                        if(bt==8 && bl==61 || bl==60)
                        {
                            db();
                            u=1;
                            l1=5;
                            l2=5;
                            bl=bl-6;

                        }
                    }
                    if(u==1)
                    {
                        if(bt==7 && bl==20 || bl==19)
                        {
                            db();
                            u=2;
                            l1=5;
                            l2=5;
                            c=500;
                        }
                    }
                }
                else if(l2==5)
                {
                    bt++;
                    bl--;
                    if(bt==16 && bl==11)
                    {
                        l1=100;
                        l2=100;
                        bl=bl+3;
                        goto one10;
                    }
                }
                if(bt==25)
                {
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7|| bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {
                        l1=-15;
                        l2=-15;
                        goto one9;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            one10:
            if(l1==100 && l2==100)
            {
                if(l3<20)
                {
                    bt--;
                    bl++;
                    l3++;
                    l4++;
                    if(bt==8 && bl==41 || bl==42 || bl==40)
                    {
                        db();
                        goto end;
                    }
                }
                else if(l4==20)
                {
                    bt++;
                    bl++;
                }
                if(bt==25)
                {
                    if(bl==left || bl==left+1 ||bl==left+2 ||bl==left+3 || bl==left+4 || bl==left+5 || bl==left+6 || bl==left+7|| bl==left+8 || bl==left+9 || bl==left-1|| bl==left-2)
                    {
                        l3=0;
                        l4=0;
                        goto one10;
                    }
                    else{bt=bt+2;goto end;}
                }
            }
            gotoxy(bl,bt);
            printf("O");
            delay(65);
            if(_kbhit())
            {
                ch=_getch();
                {
                    if(ch=='d' || ch=='D' || ch=='l')
                    {
                        gotoxy(left,top);
                        printf("          ");
                        gotoxy(bl,bt);
                        printf(" ");
                        if(left<101)
                        {
                            left++;
                        }
                        gotoxy(left,top);
                        printf("==========");
                    }
                    else if(ch=='a' || ch=='A' || ch=='j')
                    {
                        gotoxy(left,top);
                        printf("          ");
                        gotoxy(bl,bt);
                        printf(" ");
                        if(left>11)
                        {
                            left--;
                        }
                        gotoxy(left,top);
                        printf("==========");
                    }
                }
            }
        }
        end:
        while(ch!='\n')
        {
            SetColor(13);
            gotoxy(53,18);
            delay(300);
            printf("Score = %d",score);
            gotoxy(0,27);
            printf("Press enter to exit\n");
            scanf("%c",&ch);
        }
        res:
        gotoxy(0,28);
        printf("If u want to play again press y else n : ");
        scanf("%c",&ch);
        if(ch=='y')
        {
            d=0;
            score=0;
            system("cls");
            goto start;
        }
        else if(ch=='n')
        {
            return 0;
        }
        else
        {
            gotoxy(0,30);
            printf("Enter valid input");
            delay(700);
            gotoxy(0,30);
            printf("                 ");
            gotoxy(0,28);
            printf("                                                      ");
            goto res;
        }
    }

void boun(int left,int top,int left1,int top1,int del,char ch)
{
    int temp;
    temp=left;
    while(temp<left1)
    {
        gotoxy(temp,top);
        printf("%c",ch);
        delay(del);
        temp++;
    }
    temp=top;
    while(temp<top1)
    {
        gotoxy(left1,temp);
        printf("%c",ch);
        delay(del);
        temp++;
    }
    temp=left1;
    while(temp>left)
    {
        gotoxy(temp,top1);
        printf("%c",ch);
        delay(del);
        temp--;
    }
    temp=top1;
    while(temp>top)
    {
        gotoxy(left,temp);
        printf("%c",ch);
        delay(del);
        temp--;
    }
}
void SetColor(int ForgC)
{
     WORD wColor;
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;

}
