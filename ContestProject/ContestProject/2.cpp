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
//string s,t;
//vector<vector<int> > dp;
//bool solve(int i , int j)
//{
//	if(i==s.length())
//		return true;
//	if(j==t.length())
//		return false;
//	if(dp[i][j]!=-1)
//		return dp[i][j];
//	return dp[i][j] =  solve(i+(s[i]==t[j]),j+1) | solve(i,j+1);
//
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>s>>t)
//	{
//		dp.clear();
//		dp.assign(s.size()+1, vector<int>(t.size()+1,-1));
//		if(solve(0,0))
//			cout << "Yes" <<endl;
//		else cout << "No" <<endl;
//	}
//
//	return 0;
//}