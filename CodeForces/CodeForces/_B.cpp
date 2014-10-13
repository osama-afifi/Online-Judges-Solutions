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
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//string s1,s2;
//int f=0;
//
//long double solve(int idx, int pos)
//{
//	if(idx==s2.length())
//		return (pos==f) ? 1.0 : 0.0;
//	
//	long double ret=0;
//
//	if(s2[idx]=='?')
//	{
//		ret += solve(idx+1,pos-1)*0.5;
//		ret += solve(idx+1,pos+1)*0.5;
//	}
//	else if(s2[idx]=='+')
//		ret += solve(idx+1,pos+1);
//	else if(s2[idx]=='-')
//		ret += solve(idx+1,pos-1);
//	return ret;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//	
//	while(cin>>s1>>s2)
//	{
//		f=0;
//		FOR(i,0,s1.length())
//			if(s1[i]=='+')
//				f++;
//			else f--;
//			
//		long double res = solve(0,0);
//		cout << setprecision(12) << fixed <<  res <<endl;
//	}
//	return 0;
//}