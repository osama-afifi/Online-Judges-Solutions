
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main()

{		

	freopen("input.in","r",stdin);

	unsigned long long  N;
	while(cin>>N)
	{

	unsigned long long int SUM = 0;

	for(unsigned long long int i=1;i<=N;i++)
	{

	SUM=SUM+(i*i*i);
	
	}

	cout<<SUM<<endl;

	}
	return 0;
}