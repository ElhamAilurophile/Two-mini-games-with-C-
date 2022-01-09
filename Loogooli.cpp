#include <iostream>
#include <graphics.h>
#include <string.h>
using namespace std;
void paint1(int x){
    //moo
    setcolor(9);
    setfillstyle(1,0);
    fillellipse(x,580,60,60);
    //sar
    setcolor(13);
    setfillstyle(1,13);
    fillellipse(x,600,60,65);
    //dahan
    setfillstyle(1,4);
    fillellipse(x,605,20,15);
    //sefidy-chshm
    setfillstyle(1,15);
    fillellipse(x-25,565,10,10);
    fillellipse(x+25,565,10,10);
    //siyahi-cheshm
    setcolor(15);
    setfillstyle(1,0);
    fillellipse(x-25,565,7,7);
    fillellipse(x+25,565,7,7);
    //dast
    setcolor(5);
    setfillstyle(1,5);
    fillellipse(x-75,600,20,15);
    fillellipse(x+75,600,20,15);
    //pa
    setfillstyle(1,5);
    fillellipse(x-30,670,20,15);
    fillellipse(x+30,670,20,15);
}
void paint2(int x){
    setcolor(9);
    setfillstyle(1,9);
    //moo
    fillellipse(x,580,60,60);
    //sar
    fillellipse(x,600,60,65);
    //dast
    fillellipse(x-75,600,20,15);
    fillellipse(x+75,600,20,15);
    //pa
    fillellipse(x-30,670,20,15);
    fillellipse(x+30,670,20,15);
}
void apple1(int x,int y,int color1,int color2){
    setcolor(color1);
    setfillstyle(1,color1);
    fillellipse(x,y,20,20);
    setcolor(color2);
    setfillstyle(1,color2);
    line(x,y-20,x,y-35);
    fillellipse(x+15,y-27,15,7);
}
main()
{
 initwindow(900,700);
 int x=450,xa,y,rand1,s=0,neg=0,h=0;
 char q;
 //background
 setcolor(9);
 setfillstyle(1,9);
 bar(0,0,900,700);
 srand(time(NULL));
 paint1(x);
 q=getch();
 while(neg<9){
     rand1=rand()%8;
     xa=120+rand1*105;
     y=30+30*rand1;
     apple1(xa,y,12,2);
     s=0;
     for(int w=1;w<=29;w++){
      if(kbhit()){
        q=getch();
       //right//39
       if(q=='m') {
        if(x+110<900){
        delay(30);
        paint2(x);
        x=x+50;
        paint1(x);}}
     //left//37
     if(q=='n'){
       if(x-110>0){
       delay(30);
       paint2(x);
       x=x-50;
       paint1(x);}}
      }
      if(y<=620){
       if(y>500 & xa>x-80 & xa<x+80){
         apple1(xa,y,9,9);
         paint2(x);
         paint1(x);
         s=1;}
       else {
        delay(150);
        apple1(xa,y,9,9);
        y=y+30;
        apple1(xa,y,12,2);}
       if(y>620){
        apple1(xa,y,9,9);}
      }
      }
      if(s==1){
        h++;
      //  setcolor(9);
        //setfillstyle(1,9);
       // bar();


//       outtextxy(10,10,to_string(h));
        cout<<endl<<h;
      }
       if(s==0){
        neg++;

        //  setcolor(9);
        //setfillstyle(1,9);
       // bar();
        cout<<endl<<neg;
       }

    }


  cout<<"game over";
	getch();
}
