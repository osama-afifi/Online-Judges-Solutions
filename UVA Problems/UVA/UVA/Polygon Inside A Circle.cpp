#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#define PI (2*acos(0.0))
using namespace std;


int main()
{

	freopen("input.in","r",stdin);
	long double R,N;
	while(cin>>R>>N)
	{
	
		cout<<setprecision(3)<<fixed<<N*(0.5*(R*R)*sin(2.0*PI/N))<<endl;

	}

	return 0;
}
