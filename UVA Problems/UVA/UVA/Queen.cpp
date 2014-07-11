#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main ()
{
	freopen("input.in", "r", stdin);

	int x1,y1,x2,y2;

	while(cin>>x1>>y1>>x2>>y2)
	{
		if (x1==0 && y1==0 && x2==0 && y2==0)break;


		int dx=x1-x2;

		if (dx<0)
			dx=-dx;


		int dy= y1-y2;
		if (dy<0)
			dy=-dy;


		int move;

		if (x1==x2 && y1==y2)
			move=0;

		else if (x1==x2 || y1==y2)
			move=1;

		else if (dy==dx)
			move=1;

		else
			move=2;


		cout<<move<<endl;

	}
	return 0;
}
