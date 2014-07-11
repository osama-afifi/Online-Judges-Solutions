#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int C,T,N;

	cin>>C;
	while(C>0)
	{
		cin>>T;
		cin>>N;
		while (T>0)
		{
			int x1,y1,x2,y2;

			cin>>x1>>y1>>x2>>y2;

			if ( x1>N ||  x2>N ||  y1>N ||  y2>N )
			{cout<<"no move"<<endl;
			continue;}

			int diff1 =abs(x1-x2);
			int diff2 =abs(y1-y2);



			if ( (x1==x2)&&(y1==y2) )
				cout<<"0"<<endl;

			else if ( diff1==diff2)
				cout<<"1"<<endl;

			else if ( (diff1%2==1 && diff2%2==1) || (diff1%2==0 && diff2%2==0) )
				cout<<"2"<<endl;

			else
				cout<<"no move"<<endl;


			T--;
		}

		C--;}
	return 0;
}
