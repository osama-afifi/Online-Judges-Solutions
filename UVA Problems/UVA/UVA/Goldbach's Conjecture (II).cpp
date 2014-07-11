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

	int N,counter;
	
	while(cin>>N)
	{
		if(N==0)break;
	counter=false;
		if(N%2==0)
		{
			for(int i=3 ; i<=N/2 ; i+=2)
			{
				if(isPrime(i) && isPrime(N-i))
					counter++;
				
			}
		}
		if(N==4)counter=1;
			
				printf("%d\n",counter);
	}



	return 0;
}