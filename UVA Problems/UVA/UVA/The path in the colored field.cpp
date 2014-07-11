#include <iostream>
#include <math.h>
#include <cstdlib>
#include <iomanip>


using namespace std;
int main()
{
	freopen("input.in","r",stdin);
	int n;
	while(cin>>n)
	{
		char MAP[300][300];

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>MAP[i][j];

		int max=0;
		int min;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				if(MAP[i][j]=='1')
				{
				 min=99999;
					for(int k=0;k<n;k++)
						for(int l=0;l<n;l++)
						{
							if(MAP[k][l]=='3')
							{
								if((abs(k-i)+abs(l-j))<min)
									min=(abs(k-i)+abs(l-j));
							}
						}
				}
				if(min>max)
					max=min;
			}

			cout<<max<<endl;
	}


	return 0;

}