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
//	int n1,n2;
//	double w;
//	bool operator < (const Edge a)const
//	{
//		return a.w>w;
//	}
//
//};
//
//Edge road[300001];
//
//int cmp(const void*a,const void*b)
//{
//	return ((Edge*)a)->w-((Edge*)b)->w;
//}
//
//
//int n,m;
//
//int forest[500505];
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
//
//	while(scanf("%d%d",&n,&m)==2)
//	{
//		if(n==0 && m==0)break;
//		string text,text1,text2;
//		int num;
//
//		map < string , int > M;
//		for(int i=0;i<n;i++)
//		{
//			cin>>text;
//			M[text]=i;
//		}
//		for(int i=0;i<m;i++)
//		{
//			cin>>text1>>text2>>num;
//			road[i].n1=M[text1];
//			road[i].n2=M[text2];
//			road[i].w=num;
//		}
//		cin>>text;
//		for(int i=0;i<=n;i++)
//			forest[i]=i;
//
//		qsort(road,m,sizeof(Edge),&cmp);
//
//
//
//		int total=0;
//		int links=0;
//
//		for(int i = 0; i<m && links<n-1  ; i++)
//		{
//			if (!isUnion(road[i].n1,road[i].n2))
//			{
//				links++;
//				makeUnion(road[i].n2,road[i].n1);
//				total+=road[i].w;
//			}
//
//		}
//		int sets=0;
//
//		for(int i=0;i<n;i++)
//		{
//			if(forest[i]==i)
//				sets++;
//		}
//
//		if(sets==1)
//			printf("%d\n",total);
//		else
//			printf("Impossible\n");
//
//
//	}
//
//	return 0;
//}