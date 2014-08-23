// Not AC
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define mp make_pair
#define BIG 1
#define SMALL 0

//long long sol[35] = {	1, 2, 4, 10, 32, 122, 544, 2770, 15872, 101042, 707584, 5405530, 44736512, 398721962, 3807514624, 38783024290, 419730685952, 4809759350882, 58177770225664, 740742376475050, 9902996106248192, 138697748786275802};
int N,K;

long long C(int n, int k) 
{
	if(k>n)return 0;
	k=min(k,n-k);
	long long res = 1;
	for(int i = n; i>=n-k+1 ; --i) {
		res *= i;
		res /= (n - i + 1); 
	}
	return res;
}

long long dp[21][21];
long long  solve(int n , int k)
{
	if(n==1 && k==1)return 1;
	if(dp[n][k]!=-1)
		return dp[n][k];

	return dp[n][k]=solve(n,k-1)+solve(n-1,n+1-k);
}

int main()
{
	freopen("input.in","r",stdin);
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		Set(dp,-1);
	scanf("%d%d",&K, &N);

	
	cout<<solve(N,N)<<endl;

	}
	int rsfsfdf=2;
	return 0;
}


