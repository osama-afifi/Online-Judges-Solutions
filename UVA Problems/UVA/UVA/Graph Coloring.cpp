//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <queue>
//#include <stdio.h>
//
//#define BLACK 1
//#define NEUTRAL 0
//#define WHITE 2
//
//using namespace std;
//
//int n,e;
//int vis[107];
//bool G[107][107];
//int col[107];
//int const oo =1<<25;
//int maxi;
//vector<int>sol;
//
//void coloring(int node , int c)
//{
//	if(node>n)
//	{
//		if(c>maxi)
//		{
//		maxi=c;
//		sol.clear();
//		for(int i = 1 ; i<=n;i++)
//			if(col[i]==BLACK)
//				sol.push_back(i);
//		}
//		return;
//	}
//	bool filsaleem=true;
//	for(int i = 1 ; i<=n ; i++)
//		if(G[node][i] && col[i]==BLACK)
//				filsaleem=false;
//
//	if(filsaleem)
//	{
//		col[node]=BLACK;
//		coloring(node+1,c+1);
//		col[node]=NEUTRAL;
//	}
//		col[node]=WHITE;
//		coloring(node+1,c);
//		col[node]=NEUTRAL;	
//}
//
//
//int main()
//{
//	freopen( "input.in" , "r" , stdin );
//
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		maxi=0;
//		memset(G,0,sizeof G);
//		memset(col,NEUTRAL,sizeof col);
//		scanf("%d%d",&n,&e);
//		int i,n1,n2;
//		for(i=0;i<e;i++)
//		{
//			scanf("%d%d",&n1,&n2);
//			G[n1][n2]=G[n2][n1]=1;
//		}
//		coloring(1,0);
//
//		printf("%d\n",maxi);
//		for(int i = 0 ; i<sol.size() ;i++)
//			{
//				if(i)putchar(' ');
//				printf("%d",sol[i]);
//			}
//		putchar('\n');
//	}
//
//	return 0;
//}