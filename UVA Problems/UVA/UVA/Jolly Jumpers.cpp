#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	long long n,x[50000];
	while (cin>>n)
	{

		
		for(int i=0;i<n;i++)
			cin>>x[i];
    int jolly_true=1;
	int jolly[3001];
///////////////////////////////////////////////////

		for(int i=0   ; i<n ;   i++)
		{	
			jolly[i]=abs(x[i]-x[i+1]);

		}

//////////////////////////////////////////////////

///////////ARRANGING ARRAY (SORTING) --->HERE ASCENDING FOR EXAMPLE//////////////
for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
{
	if (jolly[i]>jolly[j]) /////Swapping
	{
	swap(jolly[i],jolly[j]);
	}
}
//////////////////////END OF SORTING///////////////////////////////////////

	int perf_jolly[3001];

	for (int i=0;i<n-1;i++)
	perf_jolly[i]=(i+1);

	for (int i=0;i<n-1;i++)
	{
	if (jolly[i]!=perf_jolly[i])
		{jolly_true=0;
	break;}
	}
	


		if (n==1)
		cout<<"Jolly"<<endl;
		
		else if(n<0)
			cout<<"Not jolly"<<endl;

		else if(jolly_true==0)
			cout<<"Not jolly"<<endl;

		else if (jolly_true==1)
			cout<<"Jolly"<<endl;


	}
	return 0;
}
