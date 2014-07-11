//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>
//#include <cmath>
//using namespace std;
//
//
////Range Minimum Query
//#define N 1000
//int arr[N+5];
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
//	if(arr[T[2*node]]>arr[T[2*node+1]])
//		T[node] = T[2*node+1];
//	else T[node] = T[2*node];
//}
//int rsq(int i , int j , int x , int y , int node)
//{
//	if(i>=x && j<=y)return T[node];
//	if(j<x || i>y) return 0;
//	int mid = (i+j)/2;
//	return rsq(i,mid,x,y,2*node)
//	     + rsq(mid+1,j,x,y,2*node+1);
//}
//void update(int i, int j ,int idx , int v, int node)
//{
//
//	arr[idx]=v;
//	int mid = (i+j)/2;
//	if(idx<=mid)	update(i,mid,idx,v,2*node);
//	else			update(mid+1,j,idx,v,2*node+1);
//	if(arr[T[2*node]]<arr[T[2*node+1]])
//		T[node] = T[2*node];
//	else 
//		T[node] = T[2*node+1];
//}
//
//
//int main()
//{
//
//
//}