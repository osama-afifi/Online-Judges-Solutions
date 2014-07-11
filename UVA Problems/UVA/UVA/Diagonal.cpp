#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	int kase=1;
	long double n;
	while(cin>>n &&n!=0)
	{
	long double res=ceil((3+ceil(sqrt(9+8*n)))/2);

	unsigned long long out=res;

	cout<<"Case "<<kase++<<": "<<out<<endl;

	}
	return 0;
}
