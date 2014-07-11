//// Bsm Allah
//// BIT
//#include <iostream>
//#include <map>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <string>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//#define mp make_pair
//
//
//int T[50009];
//	int cum(int i)
//	{
//		int sum = 0 ;
//		while(i>0)
//		{
//			sum+=T[i];
//			i -= (i & -i);
//		}
//		return sum;
//	}
//
//	void upd(int i , int val)
//	{
//		while(i<=50000)
//		{
//			T[i]+=val;
//			i += (i & -i);
//		}
//	}
//
//	int bs(int N , int value)
//{
//	int b=1,e=N,m;
//	while(e>b)
//	{
//		m=(b+e)>>1;
//		if(cum(m)<value)
//			b=m+1;
//		else
//			e=m;
//	}
//	return b;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t, n , x;
//	scanf("%d",&t);
//	while(t--)
//	{
//		Set(T,0);
//		scanf("%d",&n);
//		FOR(i,1,n+1)
//			upd(i, 1);
//
//
//		FOR(i,1,n+1)
//		{
//			scanf("%d",&x);
//			++x;
//			int res = bs(n,x);
//			if(i==n)printf("%d\n" , res );
//			else printf("%d " ,  res );
//			upd(res,-1);
//		}
//
//	}
//	return 0;
//}