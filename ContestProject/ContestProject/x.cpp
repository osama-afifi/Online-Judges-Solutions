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
//string A;
//string B;
//int dp[109][109][300];
//int oo = 1<<25;
//int solve(int i ,int j, char c)
//{
//	if(i==j)
//	{
//		if(c==0)
//			return A[i]!=B[i];
//		else
//			return c!=B[i];
//	}
//	int mini=oo;
//	if(dp[i][j][c]!=-1)
//		return dp[i][j][c];
//	if(c==0)
//	{
//		if(A[i]==B[i])
//			mini = min(mini,solve(i+1,j,c));
//		else 
//			mini = min(mini,solve(i+1,j,B[i])+1);
//
//		if(A[j]==B[j])
//			mini = min(mini,solve(i,j-1,c));
//		else 
//			mini = min(mini,solve(i,j-1,B[j])+1);
//
//	}
//	else
//	{
//		if(c==B[i])
//			mini = min(mini,solve(i+1,j,c));
//		else 
//			mini = min(mini,solve(i+1,j,B[i])+1);
//
//		if(c==B[j])
//			mini = min(mini,solve(i,j-1,c));
//		else 
//			mini = min(mini,solve(i,j-1,B[j])+1);
//	}
//
//
//	return dp[i][j][c]=mini;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//	//freopen("output.out", "w" , stdout);
//	while(cin>>A>>B)
//	{
//		Set(dp,-1);
//		int res = solve(0,A.size()-1,0);
//		cout << res <<endl;
//	
//	}
//
//	return 0;
//}