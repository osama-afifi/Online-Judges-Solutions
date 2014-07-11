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
//double path[1030][1030];
//
//int t,n,m,n1,n2,cost,kase=0;
//pair<int , int> city[10005];
//
//double distance(int x1 , int y1 , int x2 , int y2)
//{
//	return sqrt(double( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ));
//}
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//
//	cin>>t;
//	while(t--)
//	{
//
//		scanf("%d",&n);
//
//		for(int i=0;i<n;i++)
//			scanf("%d%d",&city[i].first,&city[i].second);
//
//		for(int i=0;i<n;i++)
//			for(int j=i+1;j<n;j++)
//			{
//				path[i][j]=distance(city[i].first,city[i].second,city[j].first,city[j].second);
//				if(path[i][j]<=10)
//				path[j][i]=path[i][j];
//				else path[j][i]=path[i][j]=oo;
//			}
//
//			for(int k = 0 ; k< n ; k++)
//				for(int i = 0 ; i< n ; i++)
//					for(int j = 0 ; j< n ; j++)
//					{
//						if(path[i][k]+path[k][j]<path[i][j]+ 1e-12)
//							path[i][j]=path[i][k]+path[k][j];			
//					}
//
//				
//					double maxi=0;
//
//					for(int i = 0 ; i< n ; i++)
//					{
//						for(int j = 0 ; j< n ; j++)
//						{
//
//							if(path[i][j]>maxi)
//								maxi=path[i][j];
//						}
//	
//					}
//					printf("Case #%d:\n",++kase);
//					if(maxi<oo)
//						printf("%.4lf\n",maxi);
//					else
//						printf("Send Kurdy\n");
//
//					printf("\n");
//	}
//	return 0;
//}