//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//#include <math.h>
//
//
//using namespace std;
//
//
//
//int  const oo = 1<<25;
//int path[500][500];
//
//int n,m,n1,n2,cost,kase=0,s,t,w;
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int output[500];
//int main()
//{
//	int n,m;
//	freopen("input.in","r",stdin);
//	while( scanf("%d",&n) == 1 )
//	{
//
//		if(n==0)break;
//		int n1,ver,cost,node;
//
//		for(int i=0;i<=n;i++)
//			for(int j=0;j<=n;j++)
//				path[i][j]=oo;
//
//		while(scanf("%d",&node) == 1 )
//		{
//			if(!node)break;
//
//			while(scanf("%d",&n1) == 1 )
//			{
//				if(!n1)break;
//				path[node][n1]=1;
//			}
//
//		}
//
//
//
//		for(int k = 1 ; k<= n ; k++)
//			for(int i = 1 ; i<= n ; i++)
//				for(int j = 1 ; j<= n ; j++)
//				{
//					if(path[i][j]>path[i][k]+path[k][j])
//						path[i][j]=path[i][k]+path[k][j];		
//				}
//
//				scanf("%d",&ver);
//				while(ver--)
//				{
//					scanf("%d",&n2);
//					int c=0;
//					for(int i = 1 ; i<= n ; i++)
//						if(path[n2][i]>=oo)
//							output[c++]=i;
//
//					printf("%d",c);
//
//					for(int i = 0 ; i< c ; i++)
//						printf(" %d",output[i]);
//
//					putchar('\n');
//				}
//	}
//	return 0;
//}