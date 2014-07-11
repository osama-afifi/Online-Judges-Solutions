//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <math.h>
//#include <map>
//
//using namespace std;
//
//int const oo = 1<<25;
//int path[103][103];
//
//int t,n,m,n1,n2,cost,kase=0;
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int main()
//{
//	bool first=true;
//
//	freopen("input.in","r",stdin);
//	while(scanf("%d%d",&n,&m))
//	{
//
//		if(n==0 && m==0 )break;
//
//		map <string,int> M;
//
//		int cost;
//		string text1,text2;
//
//		for(int i=0;i<n;i++)
//			for(int j=0;j<n;j++)
//				if(i==j)
//					path[i][i]=0;
//				else
//					path[i][j]=0;
//
//		int index=0;
//		for(int i=0;i<m;i++)
//		{
//			cin>>text1>>text2>>cost;
//			if(M.find(text1)==M.end())
//				M[text1]=index++;
//			if(M.find(text2)==M.end())
//				M[text2]=index++;
//			path[M[text2]][M[text1]]=path[M[text1]][M[text2]]=cost;
//		}
//
//		for(int k = 0 ; k< n ; k++){
//			for(int i = 0 ; i< n ; i++){
//				for(int j = 0 ; j< n ; j++)
//				{		
//					path[i][j]=max( path[i][j] , min( path[i][k] , path[k][j] ) );		
//				}
//			}
//		}
//
//		
//
//		printf("Scenario #%d\n",++kase);
//
//cin>>text1>>text2;
//		printf("%d tons\n\n",path[M[text1]][M[text2]]);
//
//	}
//	return 0;
//}
//
