//
//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <queue>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//int path[1001][1001];
//
//int const oo =1<<25;
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n,m,s,n1,n2,kase=0;
//
//	while(scanf("%d",&n))
//	{
//		if(!n)break;
//
//		for(int i = 0 ; i <=n ; i++){
//			for(int j = 0 ; j <=n ; j++)
//				path[i][j]=-oo;
//			path[i][i]=0;
//		}
//
//		scanf("%d",&s);
//		int n1,n2;
//		while(scanf("%d%d",&n1,&n2))
//		{
//		if(!n1 && !n2)break;
//		path[n1][n2]=1;
//		}
//
//		for(int k = 1 ; k <=n ; k++)
//			for(int i = 1 ; i <=n ; i++)
//				if(path[i][k]!=-oo)
//				for(int j = 1 ; j <=n ; j++)
//					if(path[k][j]!=-oo)
//						path[i][j]=max(path[i][j],path[i][k]+path[k][j]);
//
//int len=0;
//int fin=s;
//
//			for(int i = 1 ; i <=n ; i++)
//					if(path[s][i]>len){
//						len=path[s][i];
//						fin=i;
//					}
//					else if(path[s][i]==len && i<fin)
//						fin=i;
//
//	printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",++kase,s,len,fin);
//
//	}
//	return 0;
//}
//
