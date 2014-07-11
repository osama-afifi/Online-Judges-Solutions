#include <iostream>
#include<iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	double t,n,x[1500],avg;

	cin>>t;

	while (t>0)
	{
		cin>>n;
		if (n==0)
		{cout << setprecision(3) << fixed << n <<"%"<< endl;
		continue;}

		int i=0;

		for(i=0;i<n;i++)
			cin>>x[i];

		int sum=0;
		for(i=0;i<n;i++)
			sum=sum+x[i];

		avg=sum/n;

		int above=0;
		for(i=0;i<n;i++)
		{if (x[i]>avg)
		above++;}

		double per;

		per=(above/n)*100;

		//cout<<per<<"%"<<endl;

		cout << setprecision(3) << fixed << per <<"%"<< endl;

		t--;
	}
	return 0;
}