//#include<iostream>
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
//
//	bool operator < (const Edge a)const
//	{
//		return a.w>w;
//	}
//
//};
//
//Edge road[300009];
//
//int cmp(const void* a,const void* b)
//{
//	if((*(Edge*)a).w<(*(Edge*)b).w)
//		return -1;
//	else
//		return 1;
//}
//
//
//int n,m;
//pair <int , int > city [10009];
//pair <int , int > sol [10009];
//int forest[10009];
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
//int square(int x)
//{
//	return x*x;
//}
//
//double distance(int x1 , int y1 , int x2 , int y2)
//{
//	return sqrt(double((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,a,n1,n2,cost,kase=0,e,e1,e2;
//
//	scanf("%d",&t);
//
//	while(t--)
//	{
//
//		scanf("%d",&n);
//
//		for(int i=1;i<=n;i++)
//		{
//			scanf("%d%d",&city[i].first,&city[i].second);
//			forest[i]=i;
//		}
//
//		m=0;
//
//		for(int i=1;i<=n;i++)
//			for(int j=i+1;j<=n;j++)
//			{
//				road[m].n1=i;
//				road[m].n2=j;
//				road[m].w=distance(city[i].first,city[i].second,city[j].first,city[j].second);
//				m++;
//			}
//
//			scanf("%d",&e);
//			bool done = false;
//			int j=0;
//			for(int i =0 ; i<e ; i++)
//			{
//				scanf("%d%d",&e1,&e2);
//				if(!isUnion(e1,e2))
//				{
//					j++;
//					makeUnion(e1,e2);
//				}
//
//			}
//
//			qsort(road,m,sizeof(Edge),&cmp);
//
//			for(int i =0  ; i<m && j<n-1 ; i++)
//			{
//				if(!isUnion(road[i].n1,road[i].n2))
//				{
//					done=true;
//					makeUnion(road[i].n1,road[i].n2);
//					printf("%d %d\n" , road[i].n1 , road[i].n2);
//					j++;
//				}
//			}
//
//			if(!done)
//				printf("No new highways need\n");
//
//			if(t)printf("\n");
//
//	}
//
//	return 0;
//}
