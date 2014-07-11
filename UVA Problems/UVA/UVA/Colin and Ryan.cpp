
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>



using namespace std;
/////////////////////////////////////////////////////////////////////////////

int main()
{

	freopen("input.in","r",stdin);

	int t;
	int kase=1;
	cin>>t;
	while(t>0)
	{
    	unsigned long long C;
		unsigned long long R;
		long double X;
		cin>>C>>R;

		X=C-R;

		if(C==R)
		{
			cout<<"Case #"<<kase++<<": 0"<<endl;
			t--;
			continue;
		}

		unsigned long long Z=sqrt(X);
		unsigned long long Y=X;

		long long int factors[44725];
		int q=0;

		for (int j = 1; j <=Z; j++)
		{
			if ((Y % j) == 0 )
			{
				if(j>R)
				{
					factors[q] = j;
					q++;
				}

				if((Y/j)>R &&(Y/j)!=j) ///so not 10 10
				{
					factors[q]=(Y/j);
					q++;
				}
			}
		}

		sort(factors,factors+q);
		cout<<"Case #"<<kase++<<":";
		for (int i = 0; i <q; i++)
		{
			cout<<" ";
			cout<<factors[i];
		}

		cout<<endl;
		t--;}

	return 0;
}