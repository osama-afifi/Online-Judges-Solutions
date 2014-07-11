#include <iostream>


using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int t,n,i,kase=1;
	int x[51];
	cin>>t;


	while (t>0)
	{
		int high=0, low=0;

		cin>>n;

		for (i=0; i<n ;i++)
		{cin>>x[i];}

		for (i=0; i<(n-1);i++)
		{
			if	(x[i]==x[i+1])
				continue;

			if	(x[i]>x[i+1])
				low++;
			else if	(x[i]<x[i+1])
				high++;
		}

		cout<<"Case "<<kase++<<": "<<high<<" "<<low<<endl;

		t--;
	}
	return 0;
}