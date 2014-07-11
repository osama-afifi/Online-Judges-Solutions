#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

bool HAPPY( unsigned long long n,unsigned long long N)
{
	unsigned long long sum=0;
	while(n!=0)
	{
		sum=sum+((n%10)*(n%10));
		n=n/10;
		
	}


	if(sum==1 &&sum<10)
		return true;
	else if(sum<10)
		return false;
	else
		return HAPPY( sum,N);
}

int main ()
{
	freopen("input.in", "r", stdin);

	int t,kase=1;

	cin>>t;
	while(t>0)
	{
		unsigned long long N;
		cin>>N;
		unsigned long long n=N;


		bool happy;

		if(HAPPY(n,N)==true)
			cout<<"Case #"<<kase++<<": "<<N<<" is a Happy number."<<endl;
		else
			cout<<"Case #"<<kase++<<": "<<N<<" is an Unhappy number."<<endl;

		t--;
	}
	return 0;
}
