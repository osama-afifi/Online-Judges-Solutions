//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cstring>
//#include <algorithm>
//#include <map>
//#include <queue>
//#include <vector>
//#include <stdio.h>
//
//using namespace std;
//
//int const oo = 1<<25;
//
//struct edge
//{
//	int n1,n2,c;
//	edge()
//	{}
//	edge(int e1 , int e2 , int cc):n1(e1), n2(e2) , c(cc)
//	{}
//	bool operator < ( const edge & a)const
//	{
//		return c<a.c;
//	}
//};
//
//
//int forest[10001];
//
//int getforest(int i)
//{
//	if(forest[i]==i)return i;
//	else return forest[i]=getforest(forest[i]);
//}
//
//void makeUnion(int a , int b)
//{
//	forest[getforest(a)]=getforest(b);
//}
//bool isUnion(int a , int b)
//{
//	return getforest(a)==getforest(b);
//}
//vector<edge>V;
//char temp[15];
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n,t,q,n1,n2,w,e;
//	scanf("%d",&t);
//	string text;
//	while(t--)
//	{
//		scanf("%d",&n);
//		V.clear();
//		e=0;
//		for(int i =0 ; i<= n ; i++)
//			forest[i]=i;
//
//		int index=1;
//		for(int i= 1 ; i <= n ; i++)
//		{
//			scanf("%s",&temp);
//
//			scanf("%d",&q);
//			while(q--)
//			{
//				scanf("%d%d",&n1,&w);
//				V.push_back(edge(i,n1,w));
//			}
//
//		}
//
//		sort(V.begin(),V.end());
//		int i,j=0;
//		int total=0;
//		for( i = 0; i<V.size() && j<n-1; i++)
//			if(!isUnion(V[i].n1,V[i].n2))
//			{
//				makeUnion(V[i].n1,V[i].n2);
//				total+=V[i].c;
//			}
//
//			printf("%d\n",total);
//
//	}
//	return 0;
//}
