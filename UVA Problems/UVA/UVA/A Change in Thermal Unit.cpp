#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double toC(double F)
{
	return (5.0*(F-32))/9.0;
}
double toF(double C)
{
	return ((9.0/5.0)*C)+32;
}

int main()
{
	freopen("input.in","r",stdin);
	double C,F;
	int kase=1,t;
	cin>>t;
	while(t>0)
	{
	cin>>C>>F;

	cout<<"Case "<<kase++<<": "<<setprecision(2)<<fixed<<toC(toF(C)+F)<<endl;
	t--;
	}
return 0;
}