#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	long long int N,i,j;

	while(cin>>N &&N!=0)
	{
		int G=0;

		for(i=1;i<N;i++)
			for(j=i+1;j<=N;j++)
			{

				//////GCD (i,j) /////Euclid's (Subtraction)
				int gcd;
				int x=i;
				int y=j;
				while (true)
				{
					if (x==y)
					{break;}
					if (x>y)
					{x=x-y;}
					if (x<y)
					{y=y-x;}

				}
				gcd=x;
				///////////////////////////////////
				G=G+gcd;

			}

			cout<<G<<endl;
	}

	return 0;
}
