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

int MOD = 1e9+7;
int dp[200009][2];
int R,G;
int h;
__inline LL summ(LL x)
{
	return ((x*(x+1))/2);
}


int main()
{
	ios_base::sync_with_stdio(0);
	freopen("input.in", "r" , stdin);

	cin>>R>>G;
	h=1;
	while(1)
		if (summ(h) > R + G)
			break;
		else ++h;
		--h;

		dp[0][0]=1;
		FOR(i,1,h+1)
			FOR(r,0,R+1)
		{
			dp[r][i&1]=0;
			//LL g = summ(i)-r;
			if(r-i>=0)
				dp[r][i&1]+=dp[r-i][(i-1)&1],dp[r][i&1]%=MOD;;
			if(summ(i)-r<=G)
				dp[r][i&1]+=dp[r][(i-1)&1],dp[r][i&1]%=MOD;;

		}

		int res =0;
		FOR(r,0,R+1)
		{
			res+=dp[r][h&1];
			res%=MOD;
		}
		cout << res <<endl;

		return 0;
}