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
//LL dp[30][250];
//LL solve(int idx , int psum)
//{
//	if(idx==n)
//		return 1;
//	if(idx == n)
//		return 0;
//	if(dp[idx][psum]!=-1)
//		return dp[idx][psum];
//	LL res = 0;
//	int sum = 0;
//	FOR(i,idx,n)
//	{
//		sum+=s[i]-'0';
//		if(sum>=psum)
//		res+=solve(i+1 , sum);
//	}
//	return dp[idx][psum] = res;
//}
////
////void print(int idx , int psum , int csum , string x)
////{
////	if(idx==n && (psum <= csum))
////	{
////	cout<<x<<endl;
////	}
////	if(idx == n)
////		return;
////	print(idx+1, psum , csum + s[idx]-'0' , x+s[idx]);
////	if( (psum <= csum) && idx!=0)
////	print(idx+1, csum , s[idx]-'0' , x  + "-" + s[idx]);
////}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int k =1;
//	while(cin>>s)
//	{
//		if(s=="bye")
//			break;
//		Set(dp,-1);
//		n = s.length();
//		LL res = solve(0,0);	
//		cout << k<<". " << res << endl;
//	//	print(0,0,0,"");
//		++k;
//	}
//
//	return 0;
//}
