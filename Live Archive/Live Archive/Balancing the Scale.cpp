//// Accepted
//// BIT
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
//#define pb push_back
//#define all(V) V.begin(),V.end()
//#define MAX 1000009
//using namespace std;
//
//
////
////x1 * 4 + x2 * 3 + x3 * 2 + x4 = x5 + x6 * 2 + x7 * 3 + x8 * 4
////
////y1 * 4 + y2 * 3 + y3 * 2 + y4 = y5 + y6 * 2 + y7 * 3 + y8 * 4
////Case 1: 15227223
//int para[] = {4,3,2,1,-1,-2,-3,-4};
////bool vis[20];
//int arr[20];
//vector< int >V;
////int solve2(int,int);
////int solve3(int);
//
//void solve(int start , int sum , int done , int mask)
//{
//
//	if(done==8)
//		if(sum==0)
//		{
//			 V.push_back(mask);
//			 return;
//		}
//		else return;
//
//		FOR(i,0,16)
//			if( !(mask & (1<<i)) )
//				 solve( i+1, sum+ para[done]*arr[i] , done+1 , mask | (1<<i));
//
//}
//
////int solve2(int sum , int done)
////{
////	if(done==4)
////		return solve3(sum);
////	int tot = 0;
////	FOR(i,0,16)
////		if(!vis[i])
////		{
////			vis[i]=1;
////			tot+= solve( sum+ para[done]*arr[i] , done+1);
////			vis[i]=0;
////		}
////		return tot;
////}
////__inline int solve3(int sum)
////{
////	vector<int>V;
////	FOR(i,0,16)
////		if(!vis[i])
////			V.push_back(arr[i]);
////	sort(all(V));
////	int tot = 0;
////	do
////	{
////		tot += ( (V[0] + 2*V[1] + 3*V[2] + 4*V[3])==sum);	
////	}
////	while(next_permutation(all(V)));
////	return tot;
////}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(cin>>arr[0])
//	{
//		V.clear();
//		if(!arr[0])break;
//		FOR(i,1,16)
//			cin>>arr[i];
//		solve(0,0,0,0);
//		sort(V.begin() , V.end());
//		int full = (1<<16)-1;
//		int res = 0;
//		FOR(i,0,V.size())
//		{
//			int target = (~V[i]) & full;
//			vector<int>::iterator it = lower_bound(all(V),target);
//			vector<int>::iterator temp = it;
//			while(temp==it)
//				++temp;
//			if(it!=V.end())
//				res += (int)(temp-it);
//		}
//		cout<<res <<endl;
//	}
//
//	return 0;
//}
