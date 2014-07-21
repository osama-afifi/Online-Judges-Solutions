//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <math.h>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 10009 
//using namespace std;
//
//
//int dp[55][10007];
//map<int ,int>M;
//int MOD = 5000000;
//int arr[10007];
//int arr2[10007];
//
//
//void update(int T[] ,  int i  , int v)
//{
//	while(i<=100000)
//	{
//		T[i]+=v;
//		  if(T[i] >= MOD) T[i] -= MOD;
//		  i+=(i & -i);
//	}
//}
//
//int read(int T[] , int i )
//{
//	int sum = 0;
//	while(i>0)
//	{
//		sum +=T[i] , i-=(i& -i);
//		if(sum >= MOD) sum -= MOD;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,k;
//	while(cin>>n>>k)
//	{
//		Set(dp,0);
//		M.clear();
//		FOR(i,0,n)
//		{
//			cin>>arr[i];
//			arr2[i]=arr[i];
//		}
//		sort(arr2,arr2+n);
//		int m = unique(arr2,arr2 + n) - arr2;
//
//		FOR(i,0,m)
//			M[arr2[i]] = i;
//
//			FOR(i,0,n)
//		{
//			int num = M[arr2[i]];
//			
//			update(dp[1],num+1, 1);
//			
//			for(int j = k ; j >1 ; --j)
//			{
//				int x = read(dp[j-1],num);
//				int y = read(dp[j-1],num-1);
//				//if(x-y==0)
//				update(dp[j],num+1, x) ;	
//			}
//		}
//				printf("%d\n" , read(dp[k] , 100000));
//	}
//
//	return 0;
//}