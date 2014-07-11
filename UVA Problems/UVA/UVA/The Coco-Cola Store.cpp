#include <iostream>
using namespace std;

int main ()
{
	freopen ("input.in","r",stdin);

	int N;
	while(cin>>N)
	{
		if(N==0)break;

		long long total=0;
		while(N>=3)
		{
			total=total+N/3;

			N=N/3+N%3;

		}

		if(N==2)total++;

		cout<<total<<endl;

	}
	return 0;
}
