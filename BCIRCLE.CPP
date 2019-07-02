#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

void drawcircle(int xc, int yc,int x,int y)
{
	putpixel(xc+x,yc+y,5);
	putpixel(xc-x,yc+y,5);
	putpixel(xc+x,yc-y,5);
	putpixel(xc-x,yc-y,5);
	putpixel(xc+y,yc+x,5);
	putpixel(xc-y,yc+x,5);
	putpixel(xc+y,yc-x,5);
	putpixel(xc-y,xc-x,5);
	}
void bcircle(int xc , int yc ,int r)
{
	int x=0,y=r;
	int d=2-3*r;
	while(y>=x)
	{
	   x++;
	   if(d>0)
	   {
	       y--;
	       d=d+4*(x-y)+10;
	       drawcircle(xc,yc,x,y);
	   }
	   else
	   {
	     d=d + 4*x +6;
	     drawcircle(xc,yc,x,y);
	     }
   }}

void main( )
{
	int xc=150,yc=150,r=50;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	bcircle(xc,yc,r);
	getch();
 }