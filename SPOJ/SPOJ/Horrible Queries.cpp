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
//long long  L[100009<<2];
//long long  T[100009<<2];
//
//int n,m;
//// no init
//void update(int  l ,int r , int  a ,int b , int  node , long long v )
//{
//	if(r<a || l>b || l>r)return;
//
//	if(l>=a && r<=b)
//	{
//		T[node] += (r-l+1)*v;
//		if(l!=r)
//		{
//			L[2*node] += v;
//			L[2*node+1] += v;
//		}
//		return;
//	}
//
//	int mid = (l+r)/2;
//	update(l, mid , a, b , 2*node , v);
//	update(mid+1,r , a, b , 2*node+1 , v);
//
//	//T[node] = T[2*node]+T[2*node+1];
//	T[node] += (min(b,r)-max(a,l)+1)*v;
//
//}
//
//long long query(int  l, int r , int a , int  b, int node)
//{
//	if(l>b || r<a || l>r)return 0;
//
//		T[node] += (r-l+1)*L[node];
//		if(l!=r)
//		{
//			L[2*node] += L[node];
//			L[2*node+1] += L[node];
//		}
//		L[node]=0;
//	
//	if(l>=a && r<=b)
//		return T[node];
//	int  mid = (l+r)/2;
//	return query(l,mid,a,b,2*node) + query(mid+1,r,a,b,2*node+1);
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d" ,&t);
//
//	while(t--)
//	{
//		scanf("%d %d",&n,&m);
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
//				scanf("%lld" ,&v);
//				update(0,n-1,a,b,1,v);
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
