//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//int x[] = {8,3,2,1,129};
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 100000
//using namespace std;
//
//int n;
//int idx;
//double arr[21][21];
//bool vis[(1<<18) + 9];
//double dp[(1<<18) + 9];
//
//double solve(int mask)
//{
//	if(mask & (1<<idx))
//		return 0.0;
//	if(mask + (1<<idx) == ((1<<n)-1))
//		return 1.0;
//	if(vis[mask])
//		return dp[mask];
//
//	double sum=0.0;
//	double eats = 0;
//	FOR(i,0,n)
//		if(!(mask & (1<<i)))
//			FOR(j,i+1,n)
//			if(!(mask & (1<<j)))
//			{
//				eats++;
//				sum += solve(mask | (1<<i))*arr[j][i];
//				sum += solve(mask | (1<<j))*arr[i][j];
//			}
//			vis[mask] =1;
//			return dp[mask] = sum/eats;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(cin>>n)
//	{
//
//		FOR(i,0,n)
//			FOR(j,0,n)
//			cin>>arr[i][j];
//
//		FOR(i,0,n)
//		{
//			Set(vis,0);
//			idx = i;
//			double res = solve(0);
//			cout<< res << " ";
//		}
//		cout<<endl;
//
//	}
//
//	return 0;
//}
//
