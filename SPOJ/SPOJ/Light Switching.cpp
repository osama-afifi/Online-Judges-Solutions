//
//// Method : Segment Trees
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 100000
//using namespace std;
//
//bool  L[100009<<2];
//int  T[100009<<2];
//
//int n,m;
//// no init
//
//int flip(int node , int l, int r)
//{ return L[node] ? r-l+1-T[node] : T[node];}
//
//
//void update(int  l ,int r , int  a ,int b , int  node)
//{
//
//	if(r<a || l>b || l>r)return;
//
//	if(l>=a && r<=b)
//	{
//	L[node]^=1;
//	return;
//	}
//
//		//T[node] = flip(node,l,r);
//		L[2*node] ^=L[node];
//		L[2*node+1] ^=L[node];
//		L[node] = 0;
//
//	int mid = (l+r)/2;
//	update(l, mid , a, b , 2*node);
//	update(mid+1,r , a, b , 2*node+1);
//
//	T[node]  = flip(node*2,l,mid) + flip(node*2+1,mid+1,r);
//
//}
//
//long long query(int  l, int r , int a , int  b, int node)
//{
//	if(l>b || r<a || l>r)return 0;
//
//	if(l>=a && r<=b)
//		return flip(node,l,r);
//
//		L[2*node] ^=L[node];
//		L[2*node+1] ^=L[node];
//		L[node] = 0;
//
//	int  mid = (l+r)/2;
//	T[node] =  flip(node*2,l,mid) + flip(node*2+1,mid+1,r);
//	return query(l, mid , a, b , 2*node) + query(mid+1,r , a, b , 2*node+1);
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%d %d",&n,&m)==2)
//	{
//		Set(T,0);
//		Set(L,0);
//		int  c,a,b;
//		long long v;
//		while(m--)
//		{
//			scanf("%d %d %d" , &c, &a, &b);
//			--a,--b;
//			if(c==0)
//			{
//				update(0,n-1,a,b,1);
//			}
//			else
//			{
//				printf("%lld\n",query(0,n-1,a,b,1));
//			}
//
//		}
//	}
//
//	return 0;
//}
