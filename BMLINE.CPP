#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

void drawline(int x1,int y1,int x2, int y2)
{
int dx, dy,x,p,y;
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
p=2*dy-dx;
while(x<x2)
{
   if(p>=0)
	{
	putpixel(x,y,5);
	y=y+1;
	p=p+2*dy-2*dx;
	}
   else
	{
	putpixel(x,y,5);
	p=p+2*dy;
	}
	x=x+1;
}
}

void main( )
{
	int x1,y1,x2,y2;
	int i,gd=DETECT,gm;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	printf("enter value for x1 , y1 :\t");
	scanf("%d%d",&x1,&y1);
	printf("enter value for x2  , y2:\t");
	scanf("%d%d",&x2,&y2);
	drawline(x1,y1,x2,y2);
	getch();
	}