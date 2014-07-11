//#include<iostream>
//#include<iomanip>
//#include<stdio.h>
//#include<algorithm>
//#include<math.h>
//
//using namespace std;
//
//struct edge
//{
//	int n1,n2;
//	double w;
//	bool operator < (const edge a)const
//	{
//		return a.w>w;
//	}
//
//};
//
//edge road[300001];
//
//int cmp(const void*a,const void*b)
//{
//	return ((edge*)a)->w-((edge*)b)->w;
//}
//
//
//int n;
//
//int forest[300000];
//pair<int , int> outpost[10001];
//
//
//int getforest(int i)
//{
//	if(i==forest[i])
//		return i;
//	else
//		return forest[i]=getforest(forest[i]);
//}
//
//bool isunion(int a,int b)
//{
//	return (getforest(a)==getforest(b));
//}
//
//void makeunion(int a,int b)
//{
//	forest[getforest(a)] = getforest(b);
//}
//
//
//double distance(int x1 , int y1 , int x2 , int y2)
//{
//	return sqrt(double( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ));
//}
//
//double max(double a , double b ) 
//{
//return (a>b) ? a : b;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,a,n1,n2,cost,kase=0;
//	
//	while(scanf("%d",&n) ==1)
//	{
//
//		
//
//		for(int i=0;i<n;i++)
//			scanf("%d%d",&outpost[i].first,&outpost[i].second);
//
//		for(int i=0;i<=n;i++)
//			forest[i]=i;
//
//		int m=0;
//		for(int i=0;i<n;i++)
//			for(int j=i+1;j<n;j++)
//			{
//				road[m].n1=i;
//				road[m].n2=j;
//				road[m].w=distance(outpost[i].first,outpost[i].second,outpost[j].first,outpost[j].second);	
//				m++;
//			}
//			int already;
//		int t1,t2;
//		int links=0;
//				scanf("%d",&already);
//	while(already--)
//	{
//	scanf("%d%d",&t1,&t2);
//	if (!isunion(t1-1,t2-1))
//	{
//	makeunion(t1-1,t2-1);
//	links++;
//	}
//	}
//				sort(road,road+m);
//			
//
//		
//		double res=0;
//			for(int i = 0; i<m && links<n-1  ; i++)
//			{
//				if (!isunion(road[i].n1,road[i].n2))
//				{
//					makeunion(road[i].n2,road[i].n1);
//					links++;
//					res+=road[i].w;
//				}
//
//			}
//	
//			 printf("%.2lf\n",res);
//
//
//	}
//
//	return 0;
//}