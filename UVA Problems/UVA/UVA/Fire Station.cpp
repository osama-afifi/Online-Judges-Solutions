//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <sstream>
//#include <cstring>
//#include <vector>
//#include <math.h>
//
//
//using namespace std;
//
//int const oo = 1<<25;
//int path[503][503];
//int exist[503];
//
//int n1,n2,cost,kase=0,s,t,w;
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,f,n,q,kase=0;
//
//	scanf("%d",&t);
//
//	while(t--)
//	{
//
//
//		scanf("%d%d",&f,&n);
//
//		int n1,n2,cost;
//
//		for(int i=0;i<f;i++)
//			scanf("%d",&exist[i]);
//
//		for(int i=0;i<=n;i++){
//			for(int j=0;j<=n;j++)
//			{
//				path[i][j]=oo;
//			}
//			path[i][i]=0;
//		}
//
//		string text;
//		stringstream ss;
//		cin.ignore();
//		for(int i=0;getline(cin,text);i++)
//		{
//			if(text=="")break;
//			ss.clear();
//			ss<<text;	
//			ss>>n1>>n2>>cost;
//			//	scanf("%d%d%d",&n1,&n2,&cost);
//			path[n1][n2]=path[n2][n1]=min(path[n1][n2],cost);
//		}
//
//		for(int k = 1 ; k<=n ; k++)
//			for(int i = 1 ; i<=n ; i++)
//				for(int j = 1 ; j<=n ; j++)
//					if(path[i][j]>path[i][k]+path[k][j])
//						path[i][j]=path[j][i]=path[i][k]+path[k][j];
//
//
//
//
//		int minlen=oo;
//		int maxlen=-1;
//		int res=oo,resindex;
//
//		for(int k = 1 ; k<=n ; k++)
//		{
//			maxlen=0;
//			exist[f]=k;
//			for(int i = 1 ; i<=n ; i++)
//			{
//				minlen=oo;
//
//				for(int j = 0 ; j<=f ; j++)	
//					minlen=min(path[exist[j]][i],minlen);
//
//				maxlen=max(maxlen,minlen);
//
//			}
//			if(maxlen<res)
//			{
//				res=maxlen;
//				resindex=k;
//			}
//		}
//
//		printf("%d\n",resindex);
//		if(t)
//			putchar('\n');
//	}
//	return 0;
//}