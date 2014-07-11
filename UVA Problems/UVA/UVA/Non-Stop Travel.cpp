//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <queue>
//#include <map>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//
//int const oo = 1<<25;
//int path[1003][1003];
//
//int n1,n2,cost,kase=0,s,t,w;
//
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int arr[1003][1003];
//
//
//void printpath(int a, int b, bool first) 
//{
//
//	if (path[a][b]==-1)
//	{
//		if (!first)
//			printf("%d ", a);
//		printf("%d", b);
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
//	int n,m,kase=0;
//
//	while(scanf("%d",&n)==1)
//	{
//		if(!n)break;
//
//		string text1,text2;
//		int num,cost;
//		int no;
//
//		for(int i = 1; i<= n ; i++)
//		{
//			for(int j = 1 ; j<= n ; j++)
//			{
//				path[i][j]=-1;
//				arr[i][j]=oo;
//			}
//			arr[i][i]=0;
//		}
//
//		for(int i=1 ; i<=n ; i++)
//		{
//			scanf("%d",&no);
//			while(no--)
//			{
//				scanf("%d%d",&num,&cost);
//				arr[i][num]=min(arr[i][num],cost);
//			}
//		}
//
//		for(int k = 1 ; k<= n ; k++)
//			for(int i = 1 ; i<= n ; i++)
//				for(int j = 1 ; j<= n ; j++)
//					if(arr[i][j]>arr[i][k]+arr[k][j])
//					{
//						arr[i][j]=arr[i][k]+arr[k][j];
//						path[i][j]=k;
//					}
//
//					scanf("%d%d",&s,&t);
//
//					cout<<"Case "<<++kase<<": Path = ";
//					printpath(s,t,0);
//					cout<<"; "<<arr[s][t]<<" second delay"<<endl;
//
//	}
//	return 0;
//}
