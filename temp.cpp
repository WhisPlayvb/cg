#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
	initwindow(1000,1000);
	int a,b,x=0,y,r;
	float p;
	
	cout<<"Enter coordinates of circle"<<endl;
	cin>>a>>b;
	cout<<"Enter radius"<<endl;
	cin>>r;
	
	y=r;
	
	p = 3-2*r;
	while(y>=x)
	{
		putpixel(a+x,b+y,GREEN);
		putpixel(a-x,b+y,GREEN);
		putpixel(a-x,b-y,GREEN);
		putpixel(a+x,b-y,GREEN);
		putpixel(a+y,b+x,GREEN);
		putpixel(a-y,b+x,GREEN);
		putpixel(a-y,b-x,GREEN);
		putpixel(a+y,b-x,GREEN);
		
		if(p<=0)
		{
			p = p+4*x+6;
		}
		else
		{
			p = p + 4 * (x-y)+10;
			y = y-1;
		}
		x= x+1;
	}
	getch();
	return 0;
}
