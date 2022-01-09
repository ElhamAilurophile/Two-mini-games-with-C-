#include <iostream>
#include <conio.h>
#include <graphics.h>
using namespace std;
void paint(int x,int y,int color){
     setcolor(color);
     setfillstyle(1,color);
     fillellipse(x,y,50,20);
}
main()
{
    initwindow(600,600);

    int n,p,x0=150,x1=250,x2=350,y=200,t,ra,xp,k;
    char q;
    srand(time(NULL));
    n=rand()%7+3;
    paint(x0,200,5);
    paint(x1,200,5);
    paint(x2,200,5);
    q=getch();
    for(int w=0;w<50;w++){
     delay(50);
     paint(x0,y,0);
     paint(x1,y,0);
     paint(x2,y,0);
     y--;
     paint(x0,y,5);
     paint(x1,y,5);
     paint(x2,y,5);
    }
    setfillstyle(1,15);
    ra=rand()%3;
    xp=150+100*ra;
    fillellipse(xp,200,20,20);
    for(int w=0;w<50;w++){
     delay(50);
     paint(x0,y,0);
     paint(x1,y,0);
     paint(x2,y,0);
     y++;
     paint(x0,y,5);
     paint(x1,y,5);
     paint(x2,y,5);
    }
    for(int s=1;s<=n;s++){
      p=rand()%3;
      if(p==0){
        for(int i=1;i<=8;i++){
         delay(50);
         paint(x0,y,0);
         paint(x2,y,0);
         y=y-5;
         paint(x0,y,5);
         paint(x2,y,5);
        }
        for(int j=1;j<=40;j++){
         delay(50);
         paint(x0,y,0);
         paint(x2,y,0);
         x0=x0+5;
         x2=x2-5;
         paint(x0,y,5);
         paint(x2,y,5);
        }
        for(int z=1;z<=8;z++){
          delay(50);
          paint(x0,y,0);
          paint(x2,y,0);
          y=y+5;
          paint(x0,y,5);
          paint(x2,y,5);
        }
        if(xp==150){
            k=0;}
        if(xp==350){
            k=1;}
            if(k==0){
                xp=350;
            }
            if(k==1){
                xp=150;
            }

        t=x0;
        x0=x2;
        x2=t;
        }
        if(p==1){
            for(int a=1;a<=20;a++){
              delay(50);
              paint(x0,200,0);
              paint(x1,200,0);
              x0=x0+5;
              x1=x1-5;
              paint(x0,200,5);
              paint(x1,200,5);
            }
        if(xp==150){
            k=2;}
        if(xp==250){
            k=3;}
            if(k==2){
                xp=250;
            }
            if(k==3){
                xp=150;
            }
             t=x1;
             x1=x0;
             x0=t;
        }
        if(p==2){
            for(int b=1;b<=20;b++){
               delay(50);
               paint(x1,200,0);
               paint(x2,200,0);
               x1=x1+5;
               x2=x2-5;
               paint(x1,200,5);
               paint(x2,200,5);
            }
        if(xp==250){
            k=4;}
        if(xp==350){
            k=5;}
            if(k==4){
                xp=350;
            }
            if(k==5){
                xp=250;
            }
            t=x1;
            x1=x2;
            x2=t;
        }
}

q=getch();
int a;
a=q;
if(a==49){
 if(xp==150){
  outtextxy(10,10,"win");
  }
 if(xp!=150){
 outtextxy(10,10,"loose");
 }
}
if(a==50){
   if(xp==250){
   outtextxy(10,10,"win");
  }
  if(xp!=250){
 outtextxy(10,10,"loose");
 }}
if(a==51){
   if(xp==350){
   outtextxy(10,10,"win");
  }
  if(xp!=350){
 outtextxy(10,10,"loose");
 }
}
    for(int c=0;c<40;c++){
     delay(50);
     paint(x0,y,0);
     paint(x1,y,0);
     paint(x2,y,0);
     setfillstyle(1,15);
     fillellipse(xp,200,20,20);
     y--;
     paint(x0,y,5);
     paint(x1,y,5);
     paint(x2,y,5);
    }
    setfillstyle(1,15);
    fillellipse(xp,200,20,20);

getch();
}
