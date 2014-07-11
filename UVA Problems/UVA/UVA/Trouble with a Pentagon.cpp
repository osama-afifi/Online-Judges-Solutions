#include <iostream>
#include <iomanip>
#include <math.h>


# define PI 2*acos(0.0)
using namespace std;

int main ()

{
	freopen("input.in","r",stdin);

	float s;

	while(cin>>s)

	{
		float res;

		res=( s * sin ( 36 * PI / 180 ) + s * cos ( 18 * PI / 180 ) ) / sqrt ( 2.0 );

		cout<<setprecision (10)<<fixed<<res<<endl;

	}







	return 0;
}