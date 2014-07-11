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
int n;
int matrix[101][101];
int combi[100*100+5][101];
int c=0;

void sum_col(int a , int b)
{
			for(int i=0 ; i<n ; i++)
				for(int j=a ; j<=b ; j++)
					combi[c][i]+=matrix[j][i];
}

int kadane_sum(int z)
{
	int sum=0,maxi=0;

	for(int i = 0 ; i<n ; i++)
	{
		sum = (sum+combi[z][i]>0) ? sum+combi[z][i] : 0 ;
		maxi = (sum>maxi) ? sum : maxi ;
	}

	return maxi;
}

int main()
{
	freopen("input.in","r",stdin);
	while(cin>>n)
	{
	/*	memset(combi,0,sizeof(combi));*/
		for(int i=0; i<n ; i++)
			for(int j=0; j<n ; j++)
				cin>>matrix[i][j];
		c=0;
		for(int i=0; i<n ;i++)
			for(int j=i; j<n ;j++)
			{
				sum_col(i , j);
				c++;
			}

		int maxi=0;
		int temp;
		for(int i=0 ; i<c ; i++)
		{
			temp=kadane_sum(i);
			if(temp>maxi)
				maxi=temp;
		}

		printf("%d\n",maxi);
	}
	return 0;
}