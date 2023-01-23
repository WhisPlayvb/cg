#include<graphics.h> 
#include<iostream> 
using namespace std;

void flood(int,int,int,int);  
  
int main() {
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	rectangle(50,50,250,250);
	flood(55,55,10,0);
	getch();
	closegraph();
	return 0;
}

void flood(int x, int y, int fillcolor, int defaultcolor) {
	if(getpixel(x,y)==defaultcolor) {
		delay(1);
		putpixel(x,y,fillcolor);
		flood(x+1,y,fillcolor,defaultcolor);
		flood(x-1,y,fillcolor,defaultcolor);
		flood(x,y+1,fillcolor,defaultcolor);
		flood(x,y-1,fillcolor,defaultcolor);
	}
}
