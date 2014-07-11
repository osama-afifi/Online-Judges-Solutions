////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
using namespace std;

////////////////////////////////////////////////

int main ()
{ freopen("input.in", "r", stdin);
long long N,M,x[100000],b1,b2;

while (cin>>N)
{
	
	for (int i=0;i<N;i++)
	{cin>>x[i];}
	cin>>M;
	long int max=M;
	for (int i=0;i<N;i++)
		for (int j=i+1;j<N;j++)
		{
			long long int sum=x[i]+x[j];
			long long int absolute=abs(x[i]-x[j]);
			if ( (M==sum) && (absolute<max) )
			{max=abs(x[i]-x[j]);
			b1=x[i];b2=x[j];}
			
		}

		if (b1>b2)  ///Swapping
		{int temp =b2;
		b2=b1;
		b1=temp;}


		cout<<"Peter should buy books whose prices are "<<b1<<" and "<<b2<<"."<<endl<<endl;
}
		return 0;
}

