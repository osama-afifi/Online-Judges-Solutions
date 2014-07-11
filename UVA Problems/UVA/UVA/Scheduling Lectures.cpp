//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//#include <stdio.h>
//#include <string>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//
//int n,L,C;
//int arr[1009];
//int dp[1000][509];
//int mem[1000][509];
//
//int dis(int t)
//{
//		if(!t) return 0;
//		if(t>=1 && t<=10) 
//			return -C;
//		else
//			return (t-10)*(t-10);
//}
//
//int f(int idx , int time)
//{
//	if(time<0) return 1<<25;
//	if(idx==n) return 1;
//	if(dp[idx][time] !=-1)
//		return dp[idx][time];
//	int s1 = f(idx+1, L-arr[idx])+1;
//	int s2 = f(idx+1, time-arr[idx]);
//	return dp[idx][time] = min(s1,s2);
//}
//
//int p(int idx , int time)
//{
//	if(idx==n) 
//	{
//		return dis(time);
//	}
//	//int opt  = f(idx,time);
//	int s1 = f(idx+1, L-arr[idx])+1;
//	int s2 = f(idx+1, time-arr[idx]);
//		if(mem[idx][time] !=-1)
//		return mem[idx][time];
//	if(s1<s2)
//		return mem[idx][time] = p(idx+1, L-arr[idx]) + dis(time);
//	else if(s2<s1)
//		return mem[idx][time] = p(idx+1, time-arr[idx]);
//	else
//		return mem[idx][time] = min(p(idx+1, L-arr[idx])+ dis(time), p(idx+1, time-arr[idx]));
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase = 0;
//	while(scanf("%d",&n)==1)
//	{
//		if(!n)break;
//		if(kase)putchar('\n');
//		scanf("%d %d", &L , &C);
//		FOR(i,0,n)
//			scanf("%d",&arr[i]);
//		Set(dp,-1);
//		Set(mem,-1);
//
//		
//		printf("Case %d:\n",++kase);
//		printf("Minimum number of lectures: %d\n",f(0,L));
//		printf("Total dissatisfaction index: %d\n",p(0,L));
//	}
//
//	return 0;
//}