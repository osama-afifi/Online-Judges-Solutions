//=====================================================================================
#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{
	long long x,y;
	freopen("input.in", "r", stdin);
	while(cin>>x>>y && (x>=0) && (y>=0) )
	{
		if (x>=y)
			cout<<x-y<<endl;
		else if (y>x)
			cout<<y-x<<endl;
	}
	
return 0;
}