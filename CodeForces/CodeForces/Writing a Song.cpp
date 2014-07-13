//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<map>
//
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//int n,k;
//string s;
//string x;
//bool b[209];
//int target;
//int const B=31;
//const int MOD = 10007;
//int dp[101][101];
//int F[109];
//int pwr;
//
//void failureFunction(const char* p)
//{
//	int m = strlen(p), k = 0;
//	F[0] = 0;
//	for (int q = 1; q <= m - 1; ++q) {
//		while (k > 0 && p[k] != p[q])
//			k = F[k - 1];
//		if (p[k] == p[q])
//			k++;
//		F[q] = k;
//	}
//}
//
//bool solve(int i, int h )
//{
//
//	if(i==n)
//		return true;
//	if(dp[i][h]!=-1)return dp[i][h];
//	bool ret=0;
//	for(char c ='a' ; c<k+'a' ; c++)
//	{
//		int temp = h;
//		while (temp > 0 && s[temp] != c)
//			temp = F[temp - 1];
//		if(s[temp]==c)
//			temp++;
//		if(b[i] && temp==s.size())
//			ret |= solve(i+1 , F[temp-1]);
//		else if(!b[i] && temp!=s.size())
//			ret |= solve(i+1 , temp);
//	}
//
//	return  dp[i][h] = ret;
//}
//
//void print(int i, int h)
//{
//	
//	if(i==n)
//		return;
//
//	bool ret = 0;
//	for(char c ='a' ; c<k+'a' ; c++)
//	{
//		int temp = h;
//		while (temp > 0 && s[temp] != c)
//			temp = F[temp - 1];
//		if(s[temp]==c)
//			temp++;
//		if(b[i] && temp==s.size())
//		{
//			ret |= solve(i+1 , F[temp-1]);
//			if(ret == solve(i,h))
//			{
//				putchar(c);
//				print(i+1 , F[temp-1]);
//				break;
//			}
//		}
//		else if(!b[i] && temp!=s.size())
//		{
//			ret |= solve(i+1 , temp);
//			if(ret == solve(i,h))
//			{
//				putchar(c);
//				print(i+1 , temp);
//				break;
//			}
//		}
//	}
//
//}
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//	while(cin>>n>>k)
//	{
//		Set(dp,-1);
//		cin>>s;
//		failureFunction(s.c_str());
//		cin>>x;
//		Set(b,0);
//		FOR(i,0,x.size())
//			if(x[i]=='1')
//				b[i+s.size()-1]=1;
//		if(solve(0,0))
//		{
//			print(0,0);
//			putchar('\n');
//		}
//		else
//			puts("No solution");
//
//	}
//	return 0;
//}