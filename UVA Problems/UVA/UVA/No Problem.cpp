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


int made[12];
int req[12];

int main()
{
	freopen("input.in","r",stdin);

		int total,kase=1;
	
	while(scanf("%d",&total) !=EOF)
	{
	if(total<0)break;

		for(int i =0 ; i<12 ;i++)
			scanf("%d",&made[i]);

		for(int i =0 ; i<12 ;i++)
			scanf("%d",&req[i]);

printf("Case %d:\n",kase++);
		for(int i =0 ; i<12 ;i++)
		{
			
			if(total>=req[i])
			{
				printf("No problem! :D\n");
				total-=req[i];
			}
			else
			{
				printf("No problem. :(\n");
			}
			total+=made[i];

		}

	}


	return 0;
}