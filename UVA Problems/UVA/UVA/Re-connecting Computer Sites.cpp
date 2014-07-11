//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<algorithm>
//#include<map>
//#include<stdio.h>
//#include<algorithm>
//#include<math.h>
//
//using namespace std;
//
//struct Edge
//{
//	int n1,n2,w;
//	bool operator < (const Edge a)const
//	{
//		return a.w>w;
//	}
//
//};
//
//Edge road[1000020];
//
//int cmp(const void*a,const void*b)
//{
//	return ((Edge*)a)->w-((Edge*)b)->w;
//}
//
//
//int n,m;
//
//int forest[1000020];
//pair<int , int> city[10001];
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
//int min(int a , int b)
//{return a<b ? a : b;}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,r,n1,n2,cost,kase=0,k;
//	bool first=true;
//	while(scanf("%d",&n)==1)
//	{
//		if(!first)putchar('\n');
//		first=false;
//		for(int i=0;i<=n;i++)
//			forest[i]=i;
//
//	
//
//
//		int links=0;
//		int tsum=0;
//		for(int i=0;i<n-1;i++)
//		{
//			scanf("%d%d%d",&n1,&n2,&cost);
//			tsum+=cost;
//		}
//
//		int nsum=0;
//		scanf("%d",&k);
//		int z=0;
//	for(int i=0;i<k;i++)
//	{
//	scanf("%d%d%d",&road[z].n1,&road[z].n2,&road[z].w);
//	z++;
//	}
//	scanf("%d",&m);
//
//	for(int i=0;i<m;i++)
//	{
//	scanf("%d%d%d",&road[z].n1,&road[z].n2,&road[z].w);
//	z++;
//	}
//
//	sort(road,road+m);
//
//		for(int i = 0; i<z && links<n-1  ; i++)
//		{
//			if (!isUnion(road[i].n1,road[i].n2))
//			{
//				links++;
//				makeUnion(road[i].n2,road[i].n1);
//				nsum+=road[i].w;
//			}
//
//		}
//
//
//	printf("%d\n%d\n",tsum,min(tsum,nsum));
//
//
//	}
//
//	return 0;
//}