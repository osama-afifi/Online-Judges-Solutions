#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <cstring>


using namespace std;
int t,r;
int street[501];
int sum (int m)
{
	int s=0;
for(int i=0 ; i<r ;i++)
	s+=abs(street[m]-street[i]);

	return s;
}


int main()
{
	freopen("input.in","r",stdin);
	

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&r);

		for(int i = 0 ; i < r ; i++)
				scanf("%d",&street[i]);
			
		sort(street,street+r);

		int median = (r)/2;

		printf("%d\n",sum(median));

	}

	return 0;
}