#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd = DETECT , gm;
int x,y,radius=80;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
outtextxy(x-100,50,"circle");
circle(x,y,radius);
getch();
closegraph();
}