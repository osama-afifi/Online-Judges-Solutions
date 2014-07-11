//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//
//using namespace std;
//
//struct Edge
//{
//	int n1,n2,w;
//
//	bool operator < (const Edge a)const
//	{
//		return a.w>w;
//	}
//
//};
//
//Edge road[100009];
//
//int cmp(const void*a,const void*b)
//{
//	return -((Edge*)a)->w+((Edge*)b)->w;
//}
//
//
//int n,m;
//
//int forest[100009];
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
//int const oo = 1<<25;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,a,n1,n2,cost,kase=0;
//	scanf("%d",&t);
//	while(t--)
//	{
//
//		scanf("%d%d",&n,&m);
//
//		for(int i=0;i<m;i++)
//			 scanf("%d%d%d",&road[i].n1,&road[i].n2,&road[i].w);
//
//
//
//		for(int i=0;i<n;i++)
//			forest[i]=i;
//
//	//	sort(road,road+m);
//qsort(road,m,sizeof(Edge),&cmp);
//
//		int  res=oo;
//
//		int j=0;
//		for(int i = 0; i<m && j<n-1 ; i++)
//		{
//			if (!isUnion(road[i].n1,road[i].n2))
//			{
//				
//				makeUnion(road[i].n2,road[i].n1);
//				if(road[i].w<res)
//					res=road[i].w;
//				j++;
//			}
//
//		}
//
//		printf("Case #%d: %d\n",++kase,res);
//
//	}
//
//	return 0;
//}