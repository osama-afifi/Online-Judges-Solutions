//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//int x[] = {8,3,2,1,129};
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 100000
//using namespace std;
//
//LL  T[100009<<2];
//LL  L[100009<<2];
//int n,m;
//void init(int  l ,int r , int node)
//{
//	if(l==r)
//		T[node]=l;
//	int mid = (l+r)/2;
//	init(l, mid , 2*node);
//	init(mid+1,r, 2*node+1);
//	T[node] = T[node*2]+T[node*2+1];
//}
//
//void update(int  l ,int r , int  a ,int b , int  node , long long v )
//{
//	if(r<a || l>b || l>r)return;
//	if(l>=a && r<=b)
//	{
//		T[node] = v;
//		if(l!=r)
//		{
//			L[2*node] = v;
//			L[2*node+1] = v;
//		}
//		return;
//	}
//
//	int mid = (l+r)/2;
//	update(l, mid , a, b , 2*node , v);
//	update(mid+1,r , a, b , 2*node+1 , v);
//}
//
//
//
//LL query(int  l, int r , int a , int  b, int node)
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
//long long  L2[100009<<2];
//long long  T2[100009<<2];
/////////////////////////////////////////////////
//
//
//void update2(int  l ,int r , int  a ,int b , int  node , long long v )
//{
//	if(r<a || l>b || l>r)return;
//
//	if(l>=a && r<=b)
//	{
//		T2[node] += (r-l+1)*v;
//		if(l!=r)
//		{
//			L2[2*node] += v;
//			L2[2*node+1] += v;
//		}
//		return;
//	}
//
//	int mid = (l+r)/2;
//	update2(l, mid , a, b , 2*node , v);
//	update2(mid+1,r , a, b , 2*node+1 , v);
//
//	//T[node] = T[2*node]+T[2*node+1];
//	T2[node] += (min(b,r)-max(a,l)+1)*v;
//
//}
//
//LL query2(int  l, int r , int a , int  b, int node)
//{
//	if(l>b || r<a || l>r)return 0;
//
//		T2[node] += (r-l+1)*L2[node];
//		if(l!=r)
//		{
//			L2[2*node] += L2[node];
//			L2[2*node+1] += L2[node];
//		}
//		L2[node]=0;
//	
//	if(l>=a && r<=b)
//		return T2[node];
//	int  mid = (l+r)/2;
//	return query2(l,mid,a,b,2*node) + query2(mid+1,r,a,b,2*node+1);
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//
//	while(t--)
//	{
//		cin>>n>>m;
//		Set(T,0);
//		Set(L,0);
//		Set(T2,0);
//		Set(L2,0);
//		int  c,a,b;
//		long long v;
//		while(m--)
//		{
//			cin>>c>>a>>b;
//			--a,--b;
//			if(c==1)
//			{
//				cin>>v;
//				LL x = query(0,n-1,a,b,1);
//				update(0,n-1,a,b,1,-x);
//				update(0,n-1,a,b,1,v);
//				update2(0,n-1,a,b,1,abs(v-x));
//			}
//			else
//			{
//				printf("%lld\n",query2(0,n-1,a,b,1));
//			}
//
//		}
//	}
//
//	return 0;
//}
