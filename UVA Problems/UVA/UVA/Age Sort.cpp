#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
/////////correct answer
using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	freopen("output.out", "w", stdout);

	long long  n;


	while(cin>>n &&n!=0)
	{

		int f[102];	
		long long int age;

		for(int i=0;i<=100;i++)
			f[i]=0;


		for(long long  i=0;i<n;i++)
		{
			cin>>age;

			f[age]++;

		}
		////END OF SORTING/////////////

		int first=1;
		for (int i=1;i<100;i++)
		{

			for(long long  j=f[i] ; j>0 ; j--)
			{

				if  (first!=1)
					cout<<" ";

				cout<<(i);

				first=0;

			}
		}
		cout<<endl;


	}
	return 0;
}
