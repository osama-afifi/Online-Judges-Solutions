//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>
//#include <cmath>
//using namespace std;
//
//
////Range Minimum Query
//#define N 100000
//int arr[N+9];
//int L[N<<3];
//int T[N<<3];
//
//void init(int i, int j, int node)
//{
//	if(i>j)return;
//	if(i==j)
//	{
//		T[node] = arr[i];
//			return;
//	}
//	init(i, (i+j)/2 , node*2);
//	init(((i+j)/2)+1 , j , node*2);
//	T[node] = T[node*2] + T[node*2+1];
//}
//void update(int i, int j ,int x , int y , int v, int node)
//{
//	if(i>y || j<x || i>j)return;
//	if(L[node]!=0)
//	{
//		T[node]+=L[node];
//		if(i!=j) // not leaf
//		{
//			L[node*2]=L[node];
//			L[node*2+1]=L[node];
//		}
//		L[node]=0;
//	}
//	if(i>=x&&j<=y)
//	{
//		T[node]+=v;
//		if(i!=j)
//		{
//			L[node*2]=v;
//			L[node*2+1]=v;
//		}
//		return;
//	}
//
//	update(i, (i+j)/2 ,x,y,v,node*2);
//	update(((i+j)/2)+1, j ,x,y,v,node*2+1);
//	T[node] = T[node*2]+T[node*2+1];
//
//}
//int query(int i , int j , int x , int y , int node)
//{
//		if(i>y || j<x || i>j)return;
//	if(L[node]!=0)
//	{
//		T[node]+=L[node];
//		if(i!=j) // not leaf
//		{
//			L[node*2]=L[node];
//			L[node*2+1]=L[node];
//		}
//		L[node]=0;
//	}
//	if(i>=x&&j<=y)
//		return T[node];
//	return query(i,(i+j)/2, x, y , node*2) + query(((i+j)/2)+1,j, x, y , node*2+1);
//}
//
//int main()
//{
//
//
//
//}