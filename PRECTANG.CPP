#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){
	int gd = DETECT , gm;

	int left = 150,top=150;
	int right = 450, bottom = 450;

	initgraph(&gd, &gm,"c:\\turboc3\\bgi");
	rectangle(left,top,right,bottom);
	line(225,150,225,450);
	rectangle(280,280,330,330);
	rectangle(355,280,400,330);
	rectangle(160,200,215,450);
	int arr[] = {
	150,150,
	185,75,
	225,150,
	150,150
	};
	drawpoly(4,arr);
	line(185,75,415,75);
	line(415,75,450,150);
	circle(185,112,10);

	//colors
	setfillstyle(SOLID_FILL,CYAN);
	floodfill(265,334,WHITE);
	getch();


	closegraph();
 return 0;
}