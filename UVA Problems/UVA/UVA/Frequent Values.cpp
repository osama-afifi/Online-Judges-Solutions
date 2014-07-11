//// Bsm Allah
//// Segment Tree
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
//int n,k;
//int arr[100009];
//int freq[100009];
//int T[100009<<2];
//map<int,int >M;
//
//void build(int l  = 0 , int r = n-1  , int node =1 )
//{
//	if(l==r)
//	{T[node] = freq[l]; return;}
//	int mid = (l+r)>>1;
//	build(l ,mid , node*2);
//	build(mid+1 , r , node*2+1);
//	T[node]  = max(T[node*2] , T[node*2+1]);
//}
//
//int query(int l , int r , int node, int a  ,int b)
//{
//	if(l>r || l>b || r<a) return 0;
//	if(l>=a && r<= b)
//		return T[node];
//	int mid = (l+r)>>1;
//	int s1 = query(l , mid , node*2  , a , b);
//	int s2 = query(mid+1 , r , node*2+1  , a , b);
//	return max (s1,s2);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d %d",&n , &k)==2)
//	{
//		if(!n)break;
//		FOR(i,0,n)
//			scanf("%d",&arr[i]);
//		M.clear();
//		freq[0]=1;
//		FOR(i,1,n)
//		{
//			freq[i] =  (arr[i-1] == arr[i]) ? freq[i-1] + 1 : 1;
//			M[arr[i]] = i;
//		}
//		build();
//		while(k--)
//		{
//			int a, b;
//			scanf("%d %d",&a , &b);
//			--a , --b;
//
//			if(arr[a] == arr[b]) 
//				printf("%d\n", b-a+1);
//			else
//			{
//				int s1 = query(0,n-1 , 1 , M[arr[a]]+1 , b);
//				int s2 = M[arr[a]] - a + 1 ;
//				printf("%d\n", max(s1,s2));
//			}
//		}	
//	}
//
//
//	return 0;
//}