//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//string s;
//int dp[11][2][11];
//int C[11];
//
//int solve(int idx, bool safe, int count)
//{
//	if(count<0)
//		return 0;
//	if(idx==s.length())
//		return count==0;
//	if(dp[idx][safe][count]!=-1)
//		return dp[idx][safe][count];
//	int sum=0;
//	int e= safe ? 9 : s[idx]-'0';
//	FOR(i,0,10)
//		if (safe == 1 || i <= (s[idx]-'0'))
//			sum+=solve(idx+1, safe | i<(s[idx]-'0'), count-(i==4 || i==7));
//	return dp[idx][safe][count]=sum;
//}
//
//int ch[11];
//LL res =0;
//void f(int idx, int lucky)
//{	
//
//	if(idx==6)
//	{
//		LL less=1;
//		FOR(i,0,6)
//		{
//			less *= ch[i];
//			less %=1000000007;
//		}
//
//		LL big=0;
//		FOR(i,lucky+1,10)
//		{
//			big+=C[i];
//			big%=1000000007;
//		}
//		res+= less*big;
//		res%=1000000007;
//		return;
//	}
//
//	FOR(i,0,10)
//		if(C[i])
//		{
//			ch[idx]=C[i];
//			C[i]--;
//			f(idx+1,lucky+i);
//			C[i]++;
//		}
//
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int n;
//	while(cin>>n)
//	{
//		stringstream ss;
//		ss<<n;
//		ss>>s;
//
//		FOR(i,0,11)
//		{
//			Set(dp,-1);
//			C[i]=solve(0,0,i);
//		}
//		C[0]--;
//
//		res=0;
//		f(0,0);
//		cout << res <<endl;
//	}
//
//	return 0;
//}