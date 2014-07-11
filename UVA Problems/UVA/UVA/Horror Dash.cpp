#include <iostream>


using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int t,i,kase=1,res;

	cin>>t;

	while (t>0)
	{
		int n,x[15000];

		cin>>n;

		for(i=0;i<n;i++)
			cin>>x[i];

		for(res=0,i=0;i<n;i++)
		{
			if(x[i]>res)
			res=x[i];
		}

		
		
		cout<<"Case "<<kase++<<": "<<res<<endl;
		t--;
	}
	return 0;
}