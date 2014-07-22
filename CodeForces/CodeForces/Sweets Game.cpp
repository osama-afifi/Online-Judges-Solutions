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
//
////        0 1 2
////       3 4 5 6
////      7 8 9 10 11
////      12 13 14 15
////        16 17 18
//
//int line [] = { 0 , 1 , 2 , -1 , 3 , 4 , 5 , 6, -1 , 7  , 8 , 9 , 10 , 11 , -1 , 12 , 13 ,14 ,15 , -1 , 16 , 17 ,18, -1,
// 2,6,11,-1,1,5,10,15,-1,0,4,9,14,18,-1,3,8,13,17,-1,7,12,16,-1,
// 0,3,7,-1,1,4,8,12,-1,2,5,9,13,16,-1,6,10,14,17,-1,11,15,18, -1, -1, -1, -1, -1, -1, -1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
//
//
//char M[25];
//int dp[1<<20];
//int target;
//bool vis[25];
//
//
//bool solve(int mask)
//{
//	if(mask==target)return false;
//	if(dp[mask]!=-1)return dp[mask];
//	dp[mask]=false;
//	int m;
//	for(int k = 0 ; k<75 ;k++)
//	{
//		m= mask;
//		for(int j = k ; j<75 ;j++)
//		{
//			int idx = line[j];
//			if(idx!=-1)
//			{
//				if(vis[idx] && !(m&(1<<idx)))
//				{
//					m |= (1<<idx);
//					if(!solve(m))
//						 dp[mask]=true;
//				}
//				else
//					m = mask;
//			}
//			else break;
//		}
//	}
//	return dp[mask];
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	FOR(i,0,19)
//		cin>>M[i];
//
//	target = 0;
//	Set(vis,0);
//	Set(dp,-1);
//
//	int c = 0;
//	FOR(i,0,19)
//	{
//		if(M[i] == 'O' || M[i] == '.')++c;
//		if(M[i] == 'O') target |= (1<<(c-1)), vis[c-1]=1;
//	}       
//
//
//	bool res = solve(0);
//
//	if(res)
//		cout<< "Karlsson" <<endl;
//	else 
//		cout<< "Lillebror" <<endl;
//
//	return 0;
//}