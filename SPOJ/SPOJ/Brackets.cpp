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
//#define MAX 30000
//using namespace std;
//
//long long  L[MAX<<2];
//long long  T[MAX<<2];
//
//
//char s[MAX+9];
//int arr[MAX+9];
//int cum[MAX+9];
//
//int n,m;
//int mini;
//
//void init (int l , int r , int node)
//{
//	if(l==r)
//	{
//		T[node] = cum[l];
//		return;
//	}
//	int mid = (l+r)/2;
//	init(l,mid,node*2);
//	init(mid+1,r,node*2+1);
//	T[node] = min(T[node*2],T[node*2+1]);
//}
//
//int update(int  l , int r , int  a , int b , int  node , int v )
//{
//     
//	if(l>=a && r<=b)
//	{
//		L[node]+=v;
//		return T[node]+L[node];
//	}
//      if(l>b || r<a)
//		  return T[node]+L[node] ;
//
//			L[node*2] += L[node];
//			L[node*2+1] += L[node];
//			L[node]=0;		
//	int mid = (l+r)/2;	
//	T[node] = min(update(l,mid,a,b,node*2,v),update(mid+1,r,a,b,node*2+1,v));
//}
//
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//
//	int kase=0;
//	while(scanf("%d",&n)==1)
//	{
//		scanf("%s",&s);
//
//		FOR(i,0,n)
//			arr[i] = (s[i]=='(') ? 1 : -1;
//		cum[0] = arr[0];
//		FOR(i,1,n)
//			cum[i] = cum[i-1] + arr[i];
//		int sum = cum[n-1];
//		scanf("%d", &m);
//		//Set(T,0);
//		Set(L,0);
//		int  k;
//
//		init(0,n-1,1);
//		  printf("Test %d:\n",++kase);
//		while(m--)
//		{
//			scanf("%d",&k);
//			if(k!=0)
//			{
//				--k;
//				arr[k] = -arr[k];
//				int u = 2 *arr[k];
//				update(0,n-1,k,n-1,1,u);
//				sum+=u;
//			}
//			else
//			{
//				if(sum==0 && T[1]+L[1]==0)
//					puts("YES");
//				else
//					puts("NO");
//			}
//		}
//	}
//	return 0;
//}
