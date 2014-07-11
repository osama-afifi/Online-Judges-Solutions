#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	double n,x;
	int t,res,z;
	cin>>t;

	while (t>0)
	{
		cin>>n;
	

		x= ( ( (n*63) +7492 ) *5 ) - 498;

		

		z=x/10;

		res=z%10;

		if (res<0)
			res=-res;

		cout<<res<<endl;

		t--;
	}
	return 0;
}