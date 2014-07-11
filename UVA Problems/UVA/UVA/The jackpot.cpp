//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <queue>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//struct Node
//{
//	int x,y,counter;
//	bool vis;
//
//	Node()
//	{}
//	Node(int n , int c ) : x(n) , y(c)
//	{}
//	Node(int n , int c , int v) : x(n) , y(c) , counter(v)
//	{}
//
//};
//
//vector < vector<int> > Graph;
//
//long long arr[10005];
//
//int max(int a, int b)
//{return a>b ? a :b ;}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	long long  n;
//
//	while(scanf("%lld",&n)==1)
//	{
//		if(!n)break;
//		long long current=0;
//		long long res=0;
//
//		for(int i = 0 ; i<n ; i++)
//			scanf("%lld",&arr[i]);
//
//		for(int i = 0 ; i<n ; i++)
//		{
//			current+=arr[i];
//			if(current>res)
//				res=current;
//			else if(current<0)
//				current=0;
//
//		}
//		if(res<=0)
//			puts("Losing streak.");
//		else
//			printf("The maximum winning streak is %lld.\n",res);
//	}
//	return 0;
//}
//
