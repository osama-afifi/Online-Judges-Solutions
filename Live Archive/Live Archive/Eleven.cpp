//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//#define LL long long
//
//
//string s;
//int sum = 0;
//int f[10];
//int n;
//LL C[101][101];
//LL MOD = 1e9+7;
//LL dp[55][900][11];
//LL nCk(int n, int k){
//	if(k == 0 || n == k)
//		return 1;
//	if(C[n][k] != -1)
//		return C[n][k];
//	return C[n][k] = (nCk(n - 1, k) + nCk(n - 1, k - 1)) % MOD;
//}
//
//int solve(int i , int j , int oddsum , int evensum , int dig)
//{
//	if(oddsum>500);
//	if(dig==10)
//		return abs(oddsum-evensum)%11==0;
//	LL ret = 0;
//	if(dp[i][oddsum][dig]!=-1)
//		return dp[i][oddsum][dig];
//	for(int o = 0 ; o<=i && o<=f[dig] ; o++)
//	{
//	//	if(o==1   && !dig)continue;
//		if(f[dig]-o>j)continue;
//		LL sol = nCk(i,o)*nCk(j,f[dig]-o);
//		sol %=MOD;
//
//		ret += (solve(i-o , j-(f[dig]-o) , oddsum + (o*dig) , evensum + ((f[dig]-o)*dig) , dig+1) * sol )%MOD;
//	}
//	return dp[i][oddsum][dig] = ret%MOD;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	Set(C,-1);
//	while(cin>>s)
//	{
//		Set(dp,-1);
//		Set(f,0);
//		n = s.length();
//		sum = 0;
//		FOR(i,0,n)
//		{
//			sum += s[i]-'0';
//			++f[s[i]-'0'];
//		}
//
//		LL res = solve((n+1)/2 , n/2 , 0 , 0 , 0);
//		solve((n+1)/2 , n/2 , 0 , 0 , 0);
//		if(f[0])
//		{
//			f[0]--;
//			Set(dp,-1);
//		LL x = solve((n+1)/2 -1 , n/2 , 0 , 0 , 1);
//		res -=x;
//		}
//		
//		if(res<0)res+=MOD;
//		cout <<res%MOD <<endl;	
//	
//	
//	}
//	return 0;
//}