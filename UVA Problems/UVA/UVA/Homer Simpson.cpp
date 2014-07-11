#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;


int main()
{
	freopen("input.in","r",stdin);

	int m,n,t;
	while(cin>>m>>n>>t)
	{
		int max1=0;
		int max2=0;

		int remainder=0;
		int res_rem=0;
		for(int i=0; i<=t;i++)
			for(int j=0; j<=t;j++)
			{
				int z=(m*i)+(n*j);

				remainder=t-z;

				if(z>t)break;

				if (z <= t )
				{
					if((i+j)>max1 && remainder==0)
					max1=i+j;

					else if( remainder<res_rem || ( (i+j)>max2 &&remainder==res_rem ))
					{max2=i+j;
					res_rem=t-z;
					}

					else if(max1==0 && max2==0 )
						res_rem=t;
		
				}
			}
		
			if(max1!=0)
				cout<<max1;

			else
				cout<<max2<<" "<<res_rem;

			cout<<endl;
	}

	return 0;
}