#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{

	long int x,y,z;
	while (cin>>x>>y>>z)
	{

		if (x==0 && y==0 && z==0)break;
				
		if (x<=0 || y<=0 || z<=0 )
		cout<<"wrong"<<endl;
		

		else if ( (x*x)+(y*y)==(z*z) ||  (x*x)+(z*z)==(y*y) ||  (y*y)+(z*z)==(x*x) )
			cout<<"right"<<endl;
		else
		cout<<"wrong"<<endl;

	}


	return 0;
}
