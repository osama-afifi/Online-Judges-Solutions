#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	long double  n;


	while(cin>>n &&n!=0)
	{
		long long res=pow(2,2+(n-1960)/10);

		cout<<res<<endl;
	}
	return 0;
}
