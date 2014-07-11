# include <iostream>
using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	int a,b,c,t,kase=1;
	cin>>t;
	while (t>0)
	{

		cin>>a>>b>>c;


		if (a>b)
		{
			if (c>a)
				cout<<"Case "<<kase++<<": "<<a<<endl;
			if (b>c)
				cout<<"Case "<<kase++<<": "<<b<<endl;
			if ((c>b) && (c<a))
				cout<<"Case "<<kase++<<": "<<c<<endl;
		}

	if (b>a)
	{
			if (a>c)
				cout<<"Case "<<kase++<<": "<<a<<endl;
			if (c>b)
				cout<<"Case "<<kase++<<": "<<b<<endl;
			if ((c<b) && (c>a))
				cout<<"Case "<<kase++<<": "<<c<<endl;
	}




		t--;
	}

	return 0;
}