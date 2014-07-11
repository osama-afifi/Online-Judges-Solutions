//
//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<math.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
////Range Minimum Query
//#define N 100000
//long long arr[N+9];
//vector<int> T;
//void init(int i, int j, int node)
//{
//	if(i==j)
//	{
//		T[node] = i;
//		return;
//	}
//	int mid=  (i+j)/2;
//	init(i,mid, 2*node);
//	init(mid+1, j , 2*node +1);
//	if(arr[T[2*node]]<arr[T[2*node+1]])
//		T[node] = T[2*node+1];
//	else T[node] = T[2*node];
//}
//int query(int i , int j , int x , int y , int node)
//{
//	if(i>=x && j<=y)return T[node];
//	if(j<x || i>y) return -1;
//	int mid = (i+j)/2;
//	int q1 = query(i,mid,x,y,2*node);
//	int q2 = query(mid+1,j,x,y,2*node+1);
//	if(q1==-1)return q2;
//	if(q2==-1)return q1;
//	if(arr[q1]<arr[q2])return q2;
//	else return q1;
//}
//void update(int i, int j ,int idx , int v, int node)
//{
//	if(i==j)
//	{
//		arr[idx]=v;
//		return;
//	}
//	int mid = (i+j)/2;
//	if(idx<=mid)	update(i,mid,idx,v,2*node);
//	else			update(mid+1,j,idx,v,2*node+1);
//	if(arr[T[2*node]]>arr[T[2*node+1]])
//		T[node] = T[2*node];
//	else 
//		T[node] = T[2*node+1];
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//	while(scanf("%d",&n)==1)
//	{
//
//		FOR(i,0,n)
//			scanf("%d",&arr[i]);
//
//		int h = (int) (log(n) / log(2));
//        h += 2;
//		T.resize(1<<h);
//		init(0,n-1,1);
//
//		int q;
//	char c[10];
//		int a,b;
//		scanf("%d",&q);
//		FOR(i,0,q)
//		{
//			scanf("%s",&c);
//			if(c[0]=='U')
//			{
//				scanf("%d %d",&a,&b);
//				--a;
//				update(0,n-1,a,b,1);
//			}
//			else
//			{
//				scanf("%d",&a);
//				scanf("%d",&b);
//				--a,--b;
//				int sum = 0,sec;
//				int maxi1  = query(0,n-1,a,b,1);
//
//				int temp = arr[maxi1];
//				update(0,n-1,maxi1,-1,1);
//				int maxi2  = query(0,n-1,a,b,1);
//				update(0,n-1,maxi1,temp,1);
//				//int maxi3  = query(0,n-1,maxi1+1,b,1);
//				//if(maxi2==-1)
//				//	sec=maxi3;
//				//else if(maxi3==-1)
//				//	sec = maxi2;
//				//else if(arr[maxi2]>arr[maxi2])
//				//	sec=maxi2;
//				//else sec= maxi3;
//				printf("%lld\n",arr[maxi1]+arr[maxi2]);
//			}
//		}
//	}
//	return 0;
//}