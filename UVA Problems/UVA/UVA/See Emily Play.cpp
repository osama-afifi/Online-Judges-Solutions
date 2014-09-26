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
//double dp[103][3];
//map<int , double>M;
//bool vis[103][3];
//
//double d,s,a;
//
//double exp1(int iter=0 , int n=1)
//{
//	if(n==0)
//		return 0;
//	if(iter==100)
//		return 0;
//	if(vis[iter][n])
//		return dp[iter][n];
//	vis[iter][n]=1;
//	if(n%2==0)
//		return dp[iter][n]= exp1(iter+1,n/2)+d;
//	return dp[iter][n]=  ((exp1(iter+1,n-1)*0.5)+s*0.5 )  + ( (exp1(iter+1,n+1)*0.5)+a*0.5 );
//}
//
//
//double solve(int n)
//{
//	if(n==0)
//		return 0;
//	if(n==1)
//	{
//		double x = exp1();
//		return x;
//	}
//	map<int , double> :: iterator it = M.find(n);
//	if(it!=M.end())
//		return it->second;
//	if(n%2==0)
//		return M[n]= solve(n/2)+d;
//	return M[n]= ( (solve(n-1)*0.5)+s*0.5 ) + ( (solve(n+1)*0.5)+a*0.5  );
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int t;
//	int n;
//	cin>>t;
//	while(t--)
//	{
//		M.clear();
//		Set(vis,0);
//		cin>>n>>d>>s>>a;
//		cout << setprecision(3) << fixed <<  solve(n) <<endl;
//	
//	}
//
//	return 0;
//}