# include <iostream>
# include <stdio.h>
# include <cstring>

using namespace std;

int tracks[51];
int dp[51][10001];
bool solution[51][10001];
int output[51];


void knapsack(int n , int W)
{
	dp[0][0]=0;
	for(int i = 1 ; i<=n ; i++)
	{
		dp[i][0]=0;
		dp[0][i]=0;
		
	}

	for(int i = 1 ; i<=n ; i++)
		for(int j = 0 ; j<=W ; j++)
		{
			if( j-tracks[i]>=0 && tracks[i]+dp[i-1][j-tracks[i]] > dp[i-1][j] )
			{
				dp[i][j]=tracks[i]+dp[i-1][j-tracks[i]];
				solution[i][j]=true;
			}
			else
			{
				dp[i][j]=dp[i-1][j];
				solution[i][j]=false;
			}
		}

		int K=W;
		int sol=0;
		for(int i = n ; i>=0 ; i--)
		{
			if(solution[i][K])
			{	
				output[sol++]=tracks[i];

				K=K-tracks[i];	
			}
		}

		for(int i = sol-1 ; i>=0 ; i--)
						printf("%d ",output[i]);

		printf("sum:%d\n",dp[n][W]);
	
}

int main()
{
	freopen("input.in","r",stdin);
	int n,W;
	while(cin>>W)
	{

		cin>>n;
		for(int i=1;i<=n;i++)
			scanf("%d",&tracks[i]);

		knapsack(n,W);

	}
	return 0;
}