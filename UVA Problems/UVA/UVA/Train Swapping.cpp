#include <iostream>
#include <iomanip>
#include  <math.h>
#include  <stdlib.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	int t;
	int train[100];
	cin>>t;
	while(t>0)
	{
		int count=0;
		int L;
		cin>>L;

		for( int i=0 ; i<L ; i++ )
			cin>>train[i];


		for( int i=1 ; i<L ; i++ )
		{
			if (train[i]<train[i-1])
			{
			swap(train[i],train[i-1]);
			count++;
			i=0;
			continue;
			}
		}


		cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
		t--;
	}
	return 0;
}
