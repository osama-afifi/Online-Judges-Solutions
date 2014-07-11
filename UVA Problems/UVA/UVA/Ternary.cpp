# include <iostream>

using namespace std;
int main()
{

	freopen("input.in","r",stdin);

	long long n;


	while(cin>>n)
	{
		if(n<0)break;

		if(n==0)
		{cout<<0<<endl;
		continue;}

		long long rem[300];
		long long i;
		for(i=0;n!=0;i++)
		{
			rem[i]=n%3;
			n=n/3;

		}

		int z=i--;
		for(i=z-1;i>=0;i--)
			cout<<rem[i];

		cout<<endl;
	}
	return 0;
}