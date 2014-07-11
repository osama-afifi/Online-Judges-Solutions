

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
#include <cmath>
#include <algorithm>


using namespace std;





int main ()
{ 
	freopen("input.in","r",stdin);


	int t;
	cin>>t;

	while(t>0)
	{
		long double X;
		long double Y;

		cin>>X>>Y;


		int count =0;
		int max=0;
		int tneen=0;

		for (unsigned long long i = X; i <=Y; i++)
		{
			int count=0;

			for (unsigned long long j = 1; j <=floor(sqrt(double(i))); j++)
			{
				if ((i % j) == 0 )
				{
					count++;

					if(i/j!=j ) ///so not 10 10
						count++;
			

				}
				if(count>max)
				{
					max=count;
					tneen=i;
				}
			}
		}

		if(X==1 && Y==1)
		{
		cout<<"Between "<<1<<" and "<<1<<", "<<1<<" has a maximum of "<<1<<" divisors."<<endl;
		
		t--;
		continue;
		}


		unsigned long long A=X;
		unsigned long long B=Y;
			cout<<"Between "<<A<<" and "<<B<<", "<<tneen<<" has a maximum of "<<max<<" divisors."<<endl;


			t--;
	}

	return 0;
}


