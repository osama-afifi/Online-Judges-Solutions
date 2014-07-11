#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{
	freopen("input.in", "r", stdin);

	
	long int h1,m1,h2,m2,t1,t2,res;
	while (cin>>h1>>m1>>h2>>m2)
	{

	t1=(h1*60)+m1;
	t2=(h2*60)+m2;
	
	if ((t1==0) && (t2==0))
		break;

	/////////////////
	if (t1>t2)
		{t1=1440-t1;
		res=t1+t2;}

	else 
		res=t2-t1;
	////////////////////////

	if (res>0)
	 cout<<res<<endl;
	else
	cout<<-res<<endl;

	}
	
return 0;
}