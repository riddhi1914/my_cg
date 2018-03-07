#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT,gm,left=400,top=100,right=600,bottom=150,x=100,y=150,radius=40;
initgraph(&gd, &gm,"C://TURBOC3/BGI");
rectangle(left, top, right, bottom);
rectangle(275,100,375,200);
circle(x, y, radius);
setcolor(GREEN);
circle(500,350,40);
setcolor(YELLOW);
circle(500,350,50);
setcolor(WHITE);
//bar(left + 300, top, right + 300, bottom);
line(50,250,600,250);
ellipse(150, 350 , 0, 360, 100, 50);
//ellipse(500, 400 , 0, 180, 100, 50);/* half ellipse   */
outtextxy(left + 70, top + 70, "Rectangle in CG! ");
outtextxy(300, 220, "Square in CG! ");
outtextxy(x + 10, y + 70, "Circle in CG! ");
outtextxy(100, 425, "Ellipse in CG! ");
outtextxy(300, 265, "Line in CG! ");
outtextxy(400, 415, "Concentric Circles in CG! ");
getch();
//closegraph();
return 0;
}

