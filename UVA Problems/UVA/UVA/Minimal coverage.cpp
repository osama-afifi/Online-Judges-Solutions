#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<sstream>
#include<queue>
#include<set>
#include<stack>
#include<math.h>


#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;

int n;
int m;
int dp[5509];
vector<pair<int,int>  >arr;

inline int bs(int idx)
{
	int b=
}

int solve(int i)
{
	if(i>=m)
		return 0;
	if(dp[i]!=-1)
		return dp[i];
	int mini = 1<<25;
	


	dp[i] = mini;
}

int main()
{
	freopen("input.in", "r" , stdin);

	while(cin>>m)
	{
		while(1)
		{
			pair<int,int>p;
			cin>>p.first>>p.second;
			if(p==mp(0,0))break;
			arr.push_back(p);
		}

		sort(arr.begin(),arr.end());
		Set(dp,-1);
		int res = solve(0);
		cout << res <<endl;
	}

	return 0;
}