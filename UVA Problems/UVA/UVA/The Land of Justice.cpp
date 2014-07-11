#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);
	long long int X;

	while(cin>>X && X>=0)
	{
		if(X==1) cout<<0<<"%"<<endl;
		else  cout<<X*25<<"%"<<endl;
	}
	return 0;
}