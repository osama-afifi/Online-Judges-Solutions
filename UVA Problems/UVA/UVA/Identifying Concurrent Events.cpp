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
//int const oo = 1<<25;
//int path[103][103];
//int fest[103][103];
//int city[103];
//int n1,n2,cost,kase=0,s,t,w;
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	bool first=true;
//	int c,r,q,kase=0;
//
//	while(scanf("%d%d%d",&c,&r,&q)==3)
//	{
//
//		if(c==0 && r==0 && q==0)break;
//
//		if(!first)
//			putchar('\n');
//		first=false;
//		int n1,n2,cost;
//
//		for(int i=0;i<c;i++)
//			scanf("%d",&city[i]);
//
//		for(int i=0;i<c;i++){
//			for(int j=0;j<c;j++)
//			{
//				path[i][j]=oo;
//				fest[i][j]=0;
//			}
//			//	path[i][i]=0;
//		}
//
//				for(int i=0;i<c;i++)
//			for(int j=0;j<c;j++)
//			fest[i][j]=fest[j][i]=max(city[i],city[j]);
//			
//		for(int i=0;i<r;i++)
//		{
//			scanf("%d%d%d",&n1,&n2,&cost);
//			path[n1-1][n2-1]=path[n2-1][n1-1]=cost;
//		}
//
//		for(int k = 0 ; k< c ; k++)
//			for(int i = 0 ; i< c ; i++)
//				for(int j = 0 ; j< c ; j++)
//				{
//					if(path[i][j]+fest[i][j]>path[i][k]+path[k][j]+max(fest[i][k],city[j]))
//					{
//					path[i][j]=path[i][k]+path[k][j];
//					fest[i][j]=max(fest[i][k],city[j]);
//					}
//				}
//
//				printf("Case #%d\n",++kase);
//
//				for(int i=0;i<q;i++)
//				{
//					scanf("%d%d",&n1,&n2);
//					if(path[n1-1][n2-1]<oo)
//						printf("%d\n",path[n1-1][n2-1]+fest[n1-1][n2-1]);
//					else
//						puts("-1");
//				}
//	}
//	return 0;
//}