////Not Accepted Yet :(
//
//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <map>
//#include <math.h>
//#include <queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//using namespace std;
//
//
//int R,Q;
//string s;
//int const oo=1<<25;
//int n;
//pair<int,char> dp[1007][1007][2];
//int res;
//
//pair<int,char> solve(int index, int mod, bool zero)
//{
//	if(index==n && mod==R)
//		return mp(0,0);
//	if(index==n)
//		return mp(-oo,0);
//	if(dp[index][mod][zero].first!=-1)
//		return dp[index][mod][zero]; 
//	pair<int,char> s1=mp(-oo,0),s2=mp(-oo,0);
//	s1=solve(index+1, mod, zero);
//	if((s[index]!='0') || zero)
//		s2=solve(index+1,  (mod*10+ (s[index]-'0'))%Q , 1 );
//	if(s1.first>s2.first+1)
//		dp[index][mod][zero] = s1;
//	else if(s1.first<s2.first+1)
//		dp[index][mod][zero] = mp(s2.first+1,s[index]);
//	else
//	{
//		if(s1.second<=s[index])
//			dp[index][mod][zero] = mp(s2.first+1,s[index]);
//		else
//			dp[index][mod][zero] = s1;
//	}
//	return dp[index][mod][zero];
//}
//
//void print(int index, int mod, bool zero)
//{
//	if(index==n && mod==R)
//		return;
//	if(index==n)
//		return;
//	pair<int,char> s1=mp(-oo,0),s2=mp(-oo,0);
//	s1=solve(index+1, mod, zero);
//	if((s[index]!='0') || zero)
//		s2=solve(index+1,  (mod*10+ (s[index]-'0'))%Q , 1 );
//	if(s1.first>s2.first+1)
//		print(index+1, mod, zero);
//	else if(s1.first<s2.first+1)
//		cout << s[index] , print(index+1,  (mod*10+ (s[index]-'0'))%Q , 1 );
//	else
//	{
//		if(s1.second<=s[index])
//		{
//			cout << s[index] , print(index+1,  (mod*10+ (s[index]-'0'))%Q , 1 );
//		}
//		else
//		{
//			print(index+1, mod, zero);
//		}
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		memset(dp,-1,sizeof dp);
//		cin>>s>>R>>Q;
//		n=s.length();
//		pair<int,char>res = solve(0,0,0);
//		//cout<<res<<"  ";
//		if(res.first>0 )
//		{
//			print(0,0,0);
//			cout<<endl;
//		}
//		else
//			puts("Not found");
//	}
//	return 0;
//}
