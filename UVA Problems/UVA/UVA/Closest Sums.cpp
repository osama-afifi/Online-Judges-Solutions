#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);
	int m,n,kase=1;
	int combi[1000/**1000 +10*/];
	int num[1000];
	int x;
	while(scanf("%d",&n)!=EOF)
	{
		if(!n)break;
		for(int i=0 ; i<n ; i++)
			scanf("%d",&num[i]);
		int c=0;
		for(int i=0 ; i<n ; i++)
			for(int j=i+1 ; j<n ; j++)
				combi[c++]=num[i]+num[j];

		scanf("%d",&m);
		int mini=999999999;

		printf("Case %d:\n",kase++);

		for(int i=0 ; i<m ; i++)
		{
			mini=999999999;

			scanf("%d",&x);

			int index;
			for(int i=0;i<c;i++)
			{
				if(abs(x-combi[i])<mini)
				{
					mini=abs(x-combi[i]);
					index=combi[i];
				}
			}

		
			printf("Closest sum to %d is %d.\n",x,index);


		}

	}


	return 0;
}