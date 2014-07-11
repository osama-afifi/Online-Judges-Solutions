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
//	return ((Edge*)a)->w-((Edge*)b)->w;
//}
//
//
//int n,m;
//
//int forest[100009];
//bool output[100009];
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
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n1,n2,cost;
//
//	while( scanf("%d%d",&n,&m) == 2 )
//	{
//		if(n==0 && m==0)break;
//
//		for(int i=0;i<m;i++)
//		{
//			scanf("%d%d%d",&road[i].n1,&road[i].n2,&road[i].w);
//			output[i]=false;
//		}
//		for(int i=0;i<n;i++)
//			forest[i]=i;
//
//		qsort(road,m,sizeof(Edge),&cmp);
//		int j=0;
//		for(int i = 0 ; i<m && j<n-1 ; i++)
//		{
//			if (!isUnion(road[i].n1,road[i].n2))
//			{
//				makeUnion(road[i].n2,road[i].n1);
//				output[i]=true;
//				j++;
//			}
//		}
//
//		int zatouna=0;
//
//
//		bool first=true;
//		bool done=false;
//	
//
//			for(int i=0 ; i<m ; i++)
//				if(!output[i])
//				{
//					if(first)
//						printf("%d",road[i].w);
//					else 
//						printf(" %d",road[i].w);
//					first=false;
//					done=true;
//				}
//			
//			if(done)putchar('\n');
//		
//		else
//			puts("forest");
//	}
//
//	return 0;
//}