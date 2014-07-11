
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

unsigned long long CHESS_DIAG(unsigned long long n)
{
	unsigned long long VALUE = ((n*n)-n);

	return VALUE;
}


unsigned long long CHESS(unsigned long long n)
{
	unsigned long long VALUE = ((n*n)-n);

	return VALUE;
}


int main()

{		

	freopen("input.in","r",stdin);

	unsigned long long X,Y;

	while(cin>>X>>Y)
	{
		if(X==0 && Y==0)break;

		long long ROWS=Y*CHESS(X)+X*CHESS(Y);


		if(X>Y)
			swap(X,Y);



		long long DIAG=2*(Y-X+1)*CHESS(X);

		for(long long  i=X-1 ; i>1 ; i--)

		{
			DIAG=DIAG+4*CHESS(i);

		}

		long long RES=ROWS+DIAG;

		cout<<RES<<endl;

	}



	return 0;
}