# include <iostream>
# include <math.h>
# include <iomanip>

using namespace std;




long long COUNTER(long long x,long long y)
{

	long long temp=x+y;

	long long count=0;

	for(int i=1;i<=temp;i++)
		count=count+i;

	return count+temp-y;
}

int main ()
{

	freopen("input.in", "r", stdin);

	int t,kase=1;

	cin>>t;

	while (t>0)
	{
		long long int xi,xf,yi,yf,counti,countf,res;

		cin>>xi>>yi>>xf>>yf;


		counti=COUNTER(xi,yi);
		countf=COUNTER(xf,yf);

		res=countf-counti;

		cout<<"Case "<<kase++<<": "<<res<<endl;


		t--;
	}

	return 0;
}