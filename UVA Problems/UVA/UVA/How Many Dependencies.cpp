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
//	while(scanf("%d",&n)==1)
//	{
//
//		if(n==0)break;
//
//
//		for(int i=0;i<=n;i++)
//			for(int j=0;j<=n;j++)
//				path[i][j]=0;
//
//		int c;
//		for(int i=1;i<=n;i++)
//		{
//			scanf("%d",&c);
//			while(c--)
//			{
//			scanf("%d",&n2);
//			path[i][n2]=1;
//			}
//		}
//
//		for(int k = 1 ; k<= n ; k++)
//			for(int i = 1 ; i<= n ; i++)
//				for(int j = 1 ; j<= n ; j++)
//					path[i][j] |= path[i][k]&&path[k][j];		
//
//		int maxi=0,res;
//
//		for(int i = 1 ; i<= n ; i++)
//		{
//			int sum=0;
//			for(int j = 1 ; j<= n ; j++)
//				if(path[i][j])
//					sum+=path[i][j];
//
//			if(sum>maxi)
//			{
//				maxi=sum;
//				res=i;
//			}
//		}
//
//		printf("%d\n",res);
//
//
//	}
//	return 0;
//}