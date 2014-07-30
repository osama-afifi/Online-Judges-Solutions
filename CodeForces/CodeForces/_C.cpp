#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) (A.begin(), A.end())
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;
int oo=1<<25;

int dp[100009];

int solve(int n)
{
	if(n==0)
		return 0;
	int mini = 1<<25;
	for(int i = 2 ; (i*i)/2 <=n ; i++)
		mini = min(mini,solve(n-((i*i)/2))+1);

}

int main()
{
	freopen("input.in", "r" , stdin);

	int n;
	while(cin>>n)
	{
		Set(dp,-1);


	}

	return 0;
}