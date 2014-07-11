#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

int ones (int n)
{

	int i=1,M=1,MOD=1;
	while(M%n)
		{			
	M=(M*10)+1;
	i++;
	if(M%n==0)break;
	else n=M%n;
	
	
	}
	return i;
}


int main ()
{
	freopen("input.in","r",stdin);
	int N;

		while(cin>>N)
		{
			if(N%2==0 ||  N%5==0)
				printf("0\n");
						else if(N==1)
				printf("3\n");
			else 
printf("%d\n",ones(N));

		}

return 0;
}
