//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stdio.h>
//#include <cstdio>
//#include <cassert>
//#include <time.h>
//#include <ctime>
//
//using namespace std;
//
//vector<int> Graph[25];
//bool path[25][25];
//bool vis[1000];
//int n,n1,n2,kase=0;
//int output[1000];
//int counter=0;
//bool valid[25];
//
//void dfs(int from)
//{
//	valid[from]=true;
//	for(int i = 0 ; i < Graph[from].size() ; i++)
//		if(!valid[Graph[from][i]])
//			dfs(Graph[from][i]);
//
//}
//
//void solve(int node ,int index)
//{
//	if(!valid[node])return;
//	if(node==n)
//	{
//		counter++;
//		putchar('1');
//		for(int i = 1 ; i<index;i++)
//			printf(" %d",output[i]);
//		putchar('\n');
//	}
//	else
//	{
//		for(int i= 0 ; i < Graph[node].size(); i++)
//			if(!vis[Graph[node][i]] && path[n][Graph[node][i]])
//			{
//				vis[Graph[node][i]]=true;
//				output[index]=Graph[node][i];
//				solve(Graph[node][i],index+1);	
//				vis[Graph[node][i]]=false;
//			}
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%d",&n)==1)
//	{
//
//		for(int i = 0 ; i <25 ; i++){
//			for(int j = 0 ; j <25 ; j++)
//				path[i][j]=false;
//			Graph[i].clear();
//			vis[i]=false;
//			valid[i]=false;
//		}
//		if(!n)break;
//
//		while(scanf("%d%d",&n1,&n2))
//		{
//			if(n1==0 && n2==0)break;
//			if(n1==1)
//				path[n1][n2]=true;
//			else path[n1][n2]=path[n2][n1]=true;
//			Graph[n1].push_back(n2);
//			Graph[n2].push_back(n1);
//		}
//
//		for(int i = 0 ; i<22 ; i++)
//			sort(Graph[i].begin(),Graph[i].end());
//
//		for(int k = 1 ; k <=21 ; k++)
//			for(int i = 1 ; i <=21 ; i++)
//				for(int j = 1 ; j <=21 ; j++)
//					path[i][j]|=(path[i][k] && path[k][j]);
//
//		printf("CASE %d:\n",++kase);
//		counter=0;
//		vis[1]=true;
//		dfs(1);
//		solve(1,1);
//		printf("There are %d routes from the firestation to streetcorner %d.\n",counter,n);
//		//	printf("Time used = %.3lf\n", (double)clock()/CLOCKS_PER_SEC);
//	}
//	return 0;
//}