#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream.h>

void fillFill(int x,int y,int old,int fill)
{
	int current;
	current=getpixel(x,y);
	if(current==old)
	{
		putpixel(z,y,fill);
		delay(1);
		floodFill(x+1,y,old,fill);
		floodFill(x-1,y,old,fill);
		floodFill(x,y+1,old,fill);
		floodFill(x,y-1,old,fill);
	}
	
}
void main()
{
	int o=0;
	clrscr();
	int gd=DETECT,gm;
	inintgraph(&gd,&gm, "C:\\TC\\BG");
	
	rectangle(100,100,150,150);
	rectangle(200,200,250,250);
	rectangle(300,100,350,150);
	rectangle(400,200,450,250);
	
	floodFill(125,125,o,4);
	floodFill(225,225,o,5);
	floodFill(325,125,o,6);
	floodFill(425,225,o,7);
	
	getch();
	closegraph();
}
