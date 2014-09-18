//#include <iostream>
//#include <string>
//#include <cstring>
//#include <math.h>
//#include <queue>
//#include <stack>
//#include <map>
//#include <set>
//#include <stdio.h>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//#define FOR(i,a,b) for(int i=(a) ; i<b ; i++)
//#define Set(a,v) memset(a,v,sizeof(a))
//#define mp make_pair
//#define pb push_back
//
//int dp[101][101][101];
//int pathr[101][101][101];
//int pathc[101][101][101];
//int row,col;
//
//bool solve(int p, int q , int r)
//{
//
//	if(p<=1 && q==0 && r==0)
//		return 0;
//	if(dp[p][q][r]!=-1)
//		return dp[p][q][r];
//	//top
//	for(int i=1;i<=r; i++)
//		if(!solve(p,q,r-i))
//		{
//			pathc[p][q][r]=r-i;
//			pathr[p][q][r]=3;
//			return dp[p][q][r]=1;
//		}
//
//
//		//middle
//		for(int i=1;i<=q; i++)
//			if(!solve(p,q-i,min(q-i,r)))
//			{
//				pathc[p][q][r]=q-i;
//				pathr[p][q][r]=2;
//				return dp[p][q][r]=1;
//			}
//
//
//			//bottum
//			for(int i=1;i<p; i++)
//				if(!solve(p-i,min(p-i,q),min(p-i,r)))
//				{
//					pathc[p][q][r]=p-i;
//					pathr[p][q][r]=1;
//					return dp[p][q][r]=1;
//				}
//
//				return dp[p][q][r]=0;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,kase;
//	cin>>t;
//	Set(dp,-1);
//	solve(100,100,100);
//	while(t--)
//	{
//		cin>>kase;
//		int p,q,r;
//		cin>>p>>q>>r;
//		bool b = solve(p,q,r);
//		
//			cout << kase << " ";
//			if(b)
//				cout <<"W"  << " " << pathc[p][q][r]+1 << " " << pathr[p][q][r] <<  endl;
//			else
//				cout <<"L" <<endl;
//		}
//		return 0;
//	}