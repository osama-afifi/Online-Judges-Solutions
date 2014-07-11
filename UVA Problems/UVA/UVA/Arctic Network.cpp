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
//Edge road[180000];
//
//int cmp(const void*a,const void*b)
//{
//	return ((Edge*)a)->w-((Edge*)b)->w;
//}
//
//
//int S,p;
//
//int forest[180000];
//pair<int , int> outpost[10001];
//
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
//return (a>b) ? a : b;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,a,n1,n2,cost,kase=0;
//	scanf("%d",&t);
//	while(t--)
//	{
//
//		scanf("%d%d",&S,&p);
//
//		for(int i=0;i<p;i++)
//			scanf("%d%d",&outpost[i].first,&outpost[i].second);
//
//		for(int i=0;i<=p;i++)
//			forest[i]=i;
//
//		int m=0;
//		for(int i=0;i<p;i++)
//			for(int j=i+1;j<p;j++)
//			{
//				road[m].n1=i;
//				road[m].n2=j;
//				road[m].w=distance(outpost[i].first,outpost[i].second,outpost[j].first,outpost[j].second);	
//				m++;
//			}
//
//			//	sort(road,road+m);
//			qsort(road,m,sizeof(Edge),&cmp);
//
//			double  res=0;
//		int links=0;
//			for(int i = 0; i<m && links<p-S  ; i++)
//			{
//				if (!isUnion(road[i].n1,road[i].n2))
//				{
//					res=max(road[i].w ,res);
//					makeUnion(road[i].n2,road[i].n1);
//					links++;
//				}
//
//			}
//
//	
//			 printf("%.2lf\n",res);
//
//
//	}
//
//	return 0;
//}