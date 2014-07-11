//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//using namespace std;
//typedef unsigned long long LL;
//
//string s;
//int n;
//int dp[103][300];
//vector<string>V;
//int solve(int idx , int c)
//{
//	if(idx==n)
//		return 0;
//	if(dp[idx][c]!=-1)
//		return dp[idx][c];
//	int s1 = 0 , s2 = 0;
//	if(c<=s[idx])
//		s1 = solve(idx+1, s[idx])+1;
//	s2 = solve(idx+1, c);
//	return dp[idx][c] = max(s1,s2);
//}
//void print(int idx , char c , string x)
//{
//	if(idx==n)
//	{
//		V.push_back(x);
//		return;
//	}
//	int opt = solve(idx,c);
//	int s1 = 0 , s2 = 0;
//	if(c<=s[idx])
//		s1 = solve(idx+1, s[idx])+1;
//	s2 = solve(idx+1, c);
//	if(c<=s[idx])
//		if(opt==s1)	
//			print(idx+1, s[idx] , x+s[idx]);
//	if(opt==s2)
//		print(idx+1, c, x );
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		V.clear();
//		cin>>s;
//		Set(dp,-1);
//		n = s.length();
//		LL res = solve(0 , 0);
//		//cout <<res <<endl;
//		print(0,0 , "");
//		sort(V.begin() , V.end());
//		FOR(i,0,V.size())
//		{
//			//cout<< V[i].size() << " ";
//			cout<<V[i]<<endl;
//		}
//	}
//
//	return 0;
//}
