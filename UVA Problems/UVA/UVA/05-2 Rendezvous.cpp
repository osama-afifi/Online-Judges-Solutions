//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <vector>
//#include <math.h>
//#include <map>
//
//
//using namespace std;
//
//
//
//int const oo = 1<<25;
//int path[103][103];
//int n1,n2,cost,kase=0,s,t,w;
//string M[103];
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,m;
//
//	while(scanf("%d%d",&n,&m)==2)
//	{
//
//		if(n==0 && m==0)break;
//
//
//
//		int n1,n2,cost;
//		string text;
//		for(int i=1;i<=n;i++)
//		{
//			cin>>text;
//			M[i]=text;
//		}
//
//		for(int i=0;i<=n;i++){
//			for(int j=0;j<=n;j++)
//				path[i][j]=oo;
//			path[i][i]=0;
//		}
//		for(int i=0;i<m;i++)
//		{
//			scanf("%d%d%d",&n1,&n2,&cost);
//			path[n1][n2]=path[n2][n1]=cost;
//		}
//
//		for(int k = 1 ; k<= n ; k++)
//			for(int i = 1 ; i<= n ; i++)
//				for(int j = 1 ; j<= n ; j++)
//					path[i][j]=min(path[i][j],path[i][k]+path[k][j]);		
//
//		int mini=oo,res;
//
//		for(int i = 1 ; i<= n ; i++)
//		{
//			int sum=0;
//			for(int j = 1 ; j<= n ; j++)
//				if(path[i][j]<oo)
//					sum+=path[i][j];
//
//			if(sum<mini)
//			{
//				mini=sum;
//				res=i;
//			}
//		}
//
//		cout<<"Case #"<<++kase<<" : "<<M[res]<<endl;
//
//
//	}
//	return 0;
//}