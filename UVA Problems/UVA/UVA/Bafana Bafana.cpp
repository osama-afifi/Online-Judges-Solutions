# include <iostream>
using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	int t,n,k,p,kase=1;
	cin>>t;
	while (t>0)
	{

		cin>>n>>k>>p;


		for(p=p ;(k<n) && (p!=0) ; k++, p--)
		{if (p==0)break;}

		while (p!=0)
		{
			for(k=1,p=p-1; (k<n) && (p!=0) ; k++, p--)
			{if (p==0)break;}

			if (p==0)break;
			k=1;
		}

		cout<<"Case "<<kase++<<": "<<k<<endl;

		t--;
	}

	return 0;
}