#include <iostream>
#include <string>
#include <cstring>
#include <math.h>
#include <iomanip>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

	long X,Y;

	while(cin>>X>>Y &&X!=0 &&Y!=0)
	{
		long  count,max=0,big,Z;

		bool SWAP=false;
		if(X>Y)
		{
			swap(Y,X);
			SWAP=true;
		}

		for(int i=X;i<=Y;i++)
		{
			Z=i;
			count=0;
			if(i==1)
			{
				count=3;
				if(count>max)
				{
					max=count;
					big=i;
				}
			}
			while(Z!=1 )
			{
				if(Z%2==0)
					Z=Z/2;
				else
					Z=3*Z+1;

				count++;
				if(count>max)
				{
					max=count;
					big=i;
				}
			}
		}
			cout<<"Between "<<X<<" and "<<Y<<", "<<big<<" generates the longest sequence of "<<max<<" values."<<endl;
		
	}

	return 0;
}
