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
int col[100009];
int d[100009];
int acc[100009];
LL dp[100009][2];
bool vis[100009];
vector< vector<int> >V;
LL MOD = 1000000007;
 
void dfs(int cur, int sum)
{
	if(vis[cur])
		return;
	vis[cur]=1;
	d[cur]=sum;
	FOR(i,0,V[cur].size())
	{
		int v = V[cur][i];
		dfs(v, sum+1);
	}

}


int dfs2(int cur)
{
	if(vis[cur])
		return 0;
	vis[cur]=1;
	acc[cur]=col[cur];
	FOR(i,0,V[cur].size())
	{
		int v = V[cur][i];
		acc[cur] += dfs2(v);
	}
	return acc[cur];
}


LL solve(int cur, int s)
{
	if(s>1)
		return 0;
	if(acc[cur]==1 && col[cur]==1)
		return s==1;
	if(acc[cur]==0)
		return 0;
	if(dp[cur][s]!=-1)
		return dp[cur][s];

	LL res= 0;
	FOR(i,0,V[cur].size())
	{
		int v = V[cur][i];
		if(col[cur]==1)	
				res += solve(v,0);			
		
		else if(col[cur]==0)
		{
			if(s==1)
				res += solve(v,s+col[v]);
				res += solve(v,0);
		}

		res %=MOD;
	}

	return dp[cur][s] =res%MOD;
}

int main()
{
	freopen("input.in", "r" , stdin);



	while(cin>>n)
	{
		V.clear();
		V.resize(n+1);
		int v;
		FOR(i,0,n-1)
		{
			cin>>v;
			V[v].push_back(i+1);
			V[i+1].push_back(v);
		}
		FOR(i,0,n)
			cin>>col[i];
		Set(d,0);
		Set(vis,0);
		dfs(0,0);
		int maxi=0;
		FOR(i,0,n)
			if(d[maxi]<d[i])
				maxi = i;
		Set(d,0);
		Set(vis,0);
		int root=0;
		FOR(i,0,n)
			if(d[root]<d[i])
				root = i;

		Set(vis,0);
		Set(acc,0);
		dfs2(root);


		//
		Set(dp,-1);
		LL res = solve(root,col[root]);
		cout <<res <<endl;
	}
	return 0;
}