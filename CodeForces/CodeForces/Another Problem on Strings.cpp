//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<set>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//#define mp make_pair
//using namespace std;
//
//int dp[1000009];
//int n,k;
//string text;
//
//int solve(int index)
//{
//	if(index==n)return 0;
//	
//	if(index!=-1)
//	if(dp[index]!=-1)return dp[index];
//
//	long long res = 0;
//	
//	int sum = 0;
//	FOR(i,index+1,n)
//	{
//		sum += text[i] - '0';		
//		if(sum==k)
//			res += solve(i)+1;
//		//if(sum<k)
//		//	res += solve(i);
//	}
//	res += solve(index+1);
//	return dp[index] = res;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//	while(cin>>k>>text)
//	{
//	n = text.length();
//	Set(dp,-1);
//	long long ans = solve(-1);
//	printf("%lld\n",ans);
//	}
//}
