//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//#include <math.h>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//typedef long long LL;
//using namespace std;
//
//int n;
//pair<int,int > arr[15];
//LL dp[15][15];
//int path[15][15];
//
//LL solve(int left , int right)
//{
//	if(left>=right)return 0;
//	if(left+1 == right)
//		return (arr[left].first*arr[left].second*arr[right].second);
//	if(dp[left][right]!=-1)
//		return dp[left][right];
//	LL mini = 1LL<<60;
//	FOR(mid,left,right)
//	{
//		LL temp = solve(left ,mid)+solve(mid+1 ,right)+ (arr[left].first*arr[mid].second*arr[right].second);
//		if(mini > temp)
//		{
//			mini = temp;
//			path[left][right] = mid;
//		}
//	}
//	return dp[left][right] = mini;
//}
//
//void print(int left , int right)
//{
//	if(left == right)
//	printf("A%d", left+1);
//	else
//	{
//		putchar('(');
//		if(path[left][right]!=-1) 
//		{
//			print(left, path[left][right]);
//			printf(" x ");
//			print(path[left][right]+1, right);
//		}
//		else // when left+1 == right
//			printf("A%d x A%d",left+1 , right+1);
//		putchar(')');
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase = 0;
//	while(scanf("%d",&n)==1)
//	{
//		if(!n)break;
//		FOR(i,0,n)
//			scanf("%d %d" , &arr[i].first , &arr[i].second);
//		Set(dp,-1);
//		Set(path,-1);
//		LL res = solve(0, n-1);
//		//printf("%d\n",res);
//		printf("Case %d: ",++kase);
//		print(0,n-1);
//		putchar('\n');
//	}
//	return 0;
//}