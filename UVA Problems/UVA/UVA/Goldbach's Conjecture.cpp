#include <iostream>
#include <stdio.h>
using namespace std;

bool isPrime(int n)
{
	if(n==1)return false;
	if(n==2)return true;

	if(n & 1)
	{
		for(int i=3 ; i<(n+1)/2 ; i+=2 )
			if(n%i==0)return false;
		return true;
	}
	return false;
}

int main ()
{
	freopen("input.in","r",stdin);

	int N,x;
	bool Gold; 
	while(cin>>N)
	{
		if(N==0)break;
		Gold=false;
		if(N%2==0)
		{
			for(int i=3 ; i<N ; i+=2)
			{
				if(isPrime(i) &&isPrime(N-i)){
					x=i;
					Gold=true;
					break;
				}
			}
		}

		if(N==4)
		{
		Gold=true;
		x=2;
		}

			if(Gold)
				printf("%d = %d + %d\n",N,x,N-x);
			else
				printf("Goldbach's conjecture is wrong.\n");
	}



	return 0;
}