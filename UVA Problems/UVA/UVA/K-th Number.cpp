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
//struct Node {vector<int>V;};
//Node T[100009<<2];
//int arr[100000];
//int target;
//bool found;
//
//void build(int l  = 0 , int r = n-1  , int node =1 )
//{
//	T[node].V.clear();
//	if(l==r)
//	{
//		T[node].V.push_back(arr[l]); 
//		return;
//	}
//	int mid = (l+r)>>1;
//	build(l ,mid , node*2);
//	build(mid+1 , r , node*2+1);
//
//
//	int c1 = 0 , c2 = 0   , c3 = 0;
//	T[node].V.resize(T[node*2].V.size()  + T[node*2+1].V.size() );
//
//	while(c1<T[node*2].V.size() && c2<T[node*2+1].V.size() )
//	{
//		if(T[node*2].V[c1]>=T[node*2+1].V[c2])
//			T[node].V[c3++] = (T[node*2+1].V[c2]) , ++c2;
//
//		else if(T[node*2].V[c1]<T[node*2+1].V[c2])
//			T[node].V[c3++] = (T[node*2].V[c1]) , ++c1;
//	}
//	while(c1<T[node*2].V.size())
//		T[node].V[c3++] = (T[node*2].V[c1]) , ++c1;
//
//	while(c2<T[node*2+1].V.size())
//		T[node].V[c3++] = (T[node*2+1].V[c2]) , ++c2;
//
//}
//
//
//int query(int l , int r , int node, int a  ,int b)
//{
//	if(l>r || l>b || r<a) return 0;
//	if(l>=a && r<= b)
//	{
//		int l  = 0 , r = T[node].V.size()-1;
//		while(l<r)
//		{
//			int mid = (l+r)>>1;
//			if(T[node].V[mid]>=target)
//				r = mid;
//			else 
//				l = mid+1;
//		}
//		if(T[node].V[l] == target)
//			found = 1;
//		return l + (T[node].V[l] < target);
//	}
//	int mid = (l+r)>>1;
//	return query(l , mid , node*2 , a  , b) + query(mid+1 , r , node*2+1 , a  , b);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);	
//	int m;
//	while(scanf("%d %d",&n , &m)==2)
//	{
//		if(!n)break;
//		FOR(i,0,n)
//			scanf("%d",&arr[i]);
//		build();
//		while(m--)
//		{
//			int a, b;
//			scanf("%d %d %d",&a , &b , &k);
//			--a , --b;
//			int l = 0 , r = T[1].V.size()-1;
//			int kth;
//			int mid  = (l+r)/2;
//			while(l<=r)
//			{
//				found = 0;
//				mid  = (l+r)/2;
//				target  = T[1].V[mid];
//				int kth = query(0 , n-1  , 1 , a , b);
//				if(kth>k)
//					r = mid-1;
//				else if(kth<k)
//					l = mid+1;
//				else if(found) break;   
//			}
//
//			printf("%d\n", target);
//		}	
//	}
//
//
//	return 0;
//}