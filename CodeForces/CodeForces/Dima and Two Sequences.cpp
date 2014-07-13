//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define FORE(it,c) for(__typeof((c).begin())it=(c).begin();it!=(c).end();it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
////#define N 200010
//
//using namespace std;
//
//int oo=1<<25;
//
//long long  arr1[100009];
//long long  arr2[100009];
//
//
//map<int ,int >M;
//map<int ,int >::iterator it;
//
//
//LL n, m, k, res = 1, arr[200009];
//
//int main ()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%I64d", &n)==1)
//	{
//		for(int i = 0; i < 2*n; i++)
//		{
//			scanf("%I64d", &arr[i]);
//			M[arr[i]]++;
//			if(i >= n && arr[i] == arr[i-n]) k++;
//		}
//		scanf("%I64d", &m);
//		for(it=M.begin() ; it!=M.end() ; it++)
//		{
//			for(int i = 1; i <= it->second; i++)
//			{
//				int x = i;
//				if(k > 0 && !(x&1)) x /= 2, k--;
//				res = (res * x) % m;
//			}
//		}
//		printf("%I64d\n", res);
//	}
//}