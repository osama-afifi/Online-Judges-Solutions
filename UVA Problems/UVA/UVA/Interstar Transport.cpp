//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//#include <map>
//#include <math.h>
//
//
//using namespace std;
//
//
//
//int const oo = 1<<25;
//int path[1003][1003];
//int dist[1003][1003];
//int length[1003][1003];
//int city[1003];
//int n1,n2,cost,kase=0,s,t,w;
//char c1,c2;
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//void printpath(int a, int b, bool first) 
//{
//
//	if (path[a][b]==-1)
//	{
//		if (!first)
//			printf("%c ", a+'A');
//		printf("%c", b+'A');
//		if (b != t) //if b not final 
//			putchar(' ');
//	} 
//	else
//	{
//		printpath(a, path[a][b], first);
//		printpath(path[a][b], b, true);
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	bool first=true;
//	int n,m,q;
//
//	while(scanf("%d%d",&n,&m)==2)
//	{
//
//		if(n==0 && m==0 )break;
//
//		for(int i=0;i<=n;i++){
//			for(int j=0;j<=n;j++)
//			{
//				path[i][j]=-1;
//				dist[i][j]=oo;
//				length[i][j]=1;
//			}
//			dist[i][i]=0;
//		}
//		int index=1;
//		for(int i=0;i<m;i++)
//		{
//			cin>>c1>>c2>>cost;
//			dist[c1-'A'][c2-'A']=dist[c2-'A'][c1-'A']=cost;
//		}
//
//		for(int k = 0 ; k< n ; k++)
//			for(int i = 0 ; i< n ; i++)
//				for(int j = 0 ; j< n ; j++)
//				{
//					if(dist[i][j]>dist[i][k]+dist[k][j])
//					{
//						dist[i][j]=dist[i][k]+dist[k][j];
//						path[i][j]=k;
//						length[i][j]=length[i][k]+length[k][j];
//					}
//					else if(dist[i][j]==dist[i][k]+dist[k][j] && length[i][k]+length[k][j]<length[i][j])
//					{
//						dist[i][j]=dist[i][k]+dist[k][j];
//						path[i][j]=k;
//						length[i][j]=length[i][k]+length[k][j];
//					}
//				}
//
//				scanf("%d",&q);
//				char ch;
//				while(q--)
//				{
//					cin>>c1>>c2;
//					s=c1-'A',t=c2-'A';
//					printpath(s,t,0);
//					putchar('\n');
//				}
//	}
//	return 0;
//}