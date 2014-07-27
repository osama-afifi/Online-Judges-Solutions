#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>
#include <map>
#include <set>
#include <queue>

using namespace std;
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define mp make_pair 
#define MAX 10009 
using namespace std;
typedef long long LL;

template <class T>
struct monotonic_queue {
	deque<T> q1;
	deque<T> q2;
	T pop()
	{
		T ans = q1.front();
		if(ans == q2.front())
			q2.pop_front();
		q1.pop_front();
		return ans;
	}
	void push(T i){
		while(q2.size() && q2.back() < i)
			q2.pop_back();
		q2.push_back(i);
		q1.push_back(i);
	}
	T max() {
		return q2.front();
	}
	T size() {
		return q1.size();
	}
};


struct node
{
	int cost;
	int idx;

	bool operator < (const node & n ) const
	{
		if(cost!=n.cost)
			return cost<n.cost;
		return idx>n.idx;
	}
		bool operator == (const node & n ) const
	{
		return (cost==n.cost && idx==n.idx);
	}

	node(int cost , int idx) : cost(cost) , idx(idx)
	{}
};

int n,m,k;
int arr[1009][1009];
int dp[1009][1009];
int path[1009][1009];

__inline int dist(int x1, int y1, int x2, int y2)
{
	return abs(x1-x2) + min(abs(y1-y2), m-(abs(y1-y2)));
}

void solve()
{
	for(int i = 1 ; i<=n ; i++)
	{
		monotonic_queue< node > Q;
		for(int j=0; j < m+2*k-2 ; j++)
		{
			Q.push(node(dp[i-1][j%m],j%m));
			if(j>=2*k-2)
			{
				node x = Q.max();
				dp[i][(j-k+1)%m] += x.cost;
				path[i][(j-k+1)%m] = x.idx;
				Q.pop();
			}
		}					
	}
	int maxi = -(1<<25);
	int start= m;
	FOR(j,0,m)
		if(dp[n][j]>maxi)
			maxi = dp[n][j], start= path[n][j];
		else if(dp[n][j]==maxi && path[n][j]<start)
			maxi = dp[n][j], start= path[n][j];
	

	// Print Path
	vector<int>P;
	cout << maxi <<" ";

	int cur = path[n][start];
	for(int i=n-1;i>=0;i--)
	{
		P.push_back(cur+1);
		cur = path[i][cur];	
	}
	reverse(P.begin(), P.end());
	FOR(i,0,P.size())
	{
		if(i)cout<<" ";
		cout<<P[i];
	}	

	cout<<"\n";
}



int main()
{
	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	while(t--)
	{
		Set(dp,0);
		Set(path,-1);
		cin>>n>>m>>k;
		FOR(i,0,n)
			FOR(j,0,m)
			cin>>dp[i][j];
		solve();
	}
	return 0;
}


