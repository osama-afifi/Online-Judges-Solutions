#include <iostream>
#include <iomanip>
#include <algorithm>
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
int n;
long long int num[40];

bool cmp(int n1 , int n2)
{
if (n1>n2) return true;
return false;
}

int main()
{
	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	while(t--)
	{
		int c=0;
		while(scanf("%lld",&num[c++]))
		{
			if(num[c-1]==0)break;
		}
		sort(num,num+c,cmp);
		long long int sum=0;
		for(int i = 0 ; i <c ;i++)
		{
			sum+=pow(num[i],(double)i+1);		
		}

		sum*=2;
		if(sum<=5000000)
			printf("%lld\n",sum);
		else
			printf("Too expensive\n");
	}


	return 0;
}