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
//#include<list>
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
//int n;
//int arr[109];
//int D[109];
//
//bool isprime(int x)
//{
//	for(int i=2;i<x/2;i++)
//		if(x%i==0 && x!=i)
//			return 0;
//	return 1;
//}
//
////1 2 3 5 7 11 13 17 19 23 29
//short dp[102][1<<19];
//vector<int>P;
//
//short solve(int idx, int mask)
//{
//	if(idx==n)
//		return 0;
//	if(dp[idx][mask]!=-1)
//		return dp[idx][mask];
//	int mini = 1<<14;
//	mini = min(mini, solve(idx+1,mask)+abs(arr[idx]-1));
//	FOR(i,2,61)
//		if((mask & D[i])==0)
//			mini = min(mini, solve(idx+1,mask | D[i] )+abs(arr[idx]-i));
//	return dp[idx][mask]= mini;
//}
//
//void print(int idx, int mask)
//{
//	if(idx==n)
//		return;
//
//		int o = dp[idx][mask];
//	int mini = 1<<25;
//	if(o==solve(idx+1,mask)+abs(arr[idx]-1))
//	{
//		cout<<"1 ";
//		print(idx+1,mask);
//	}
//	else
//	{
//	FOR(i,2,61)
//		if((mask & D[i])==0)
//			if(o==solve(idx+1,mask | D[i] )+abs(arr[idx]-i))
//			{
//				cout<<i<<" ";
//				print(idx+1,mask | D[i] );
//				break;
//			}
//	}
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	Set(D,0);
//	FOR(i,2,61)
//		if(isprime(i))
//			P.push_back(i);
//
//	FOR(i,2,61)
//	{
//		int t=i;
//		while(t>1)
//		{
//			FOR(j,0,P.size())
//				if(t%P[j]==0)
//				{
//					t/=P[j];
//					D[i] |= (1<<j);
//				}
//		}
//	}
//
//	while(cin>>n)
//	{
//		Set(dp,-1);
//		FOR(i,0,n)
//			cin>>arr[i];
//		int res= solve(0,0);
//		print(0,0);
//		puts("");
//	}
//
//	return 0;
//}