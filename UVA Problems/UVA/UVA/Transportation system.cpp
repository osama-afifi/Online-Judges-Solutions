//#include<iostream>
//#include<iomanip>
//#include<stdio.h>
//#include<algorithm>
//#include<math.h>
//
//using namespace std;
//
//struct Edge
//{
//	int n1,n2;
//	double w;
//	bool operator < (const Edge a)const
//	{
//		return a.w>w;
//	}
//
//};
//
//Edge road[500505];
//int n;
//
//int forest[500505];
//pair<int , int> city[100001];
//
//int getForest(int i)
//{
//	if(i==forest[i])
//		return i;
//	else
//		return forest[i]=getForest(forest[i]);
//}
//
//bool isUnion(int a,int b)
//{
//	return (getForest(a)==getForest(b));
//}
//
//void makeUnion(int a,int b)
//{
//	forest[getForest(a)] = getForest(b);
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
//	return (a>b) ? a : b;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,r,n1,n2,cost,kase=0;
//	scanf("%d",&t);
//	while(t--)
//	{
//
//		scanf("%d%d",&n,&r);
//
//		for(int i=0;i<n;i++)
//			scanf("%d%d",&city[i].first,&city[i].second);
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
//				road[m].w=distance(city[i].first,city[i].second,city[j].first,city[j].second);	
//				m++;
//			}
//			int already;
//			int t1,t2;
//			int links=0;
//
//			sort(road,road+m);
//
//
//			int states=0;
//			double roads=0;
//			double railways=0;
//
//			for(int i = 0; i<m && links<n-1  ; i++)
//			{
//				if (!isUnion(road[i].n1,road[i].n2))
//				{
//					makeUnion(road[i].n2,road[i].n1);
//					links++;
//					if(road[i].w>r)
//					{
//						states++;
//						railways+=road[i].w;
//					}
//					else
//						roads+=road[i].w;
//				}
//
//			}
//
//			printf("Case #%d: %d %.lf %.lf\n",++kase,states+1,roads,railways);
//
//
//
//	}
//
//	return 0;
//}