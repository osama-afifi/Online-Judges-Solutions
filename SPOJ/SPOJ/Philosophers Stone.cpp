//#include<algorithm>
//#include<iostream>
//#include<string>
//#include<vector>
//#include<stdio.h>
//#include<map>
//
//using namespace std;
//
//int h,w;
//char M[107][107];
//int oo =1<<25;
//bool inRange(const int &i ,const  int &j)
//{return i>=0 && i<=h && j>=0 && j<=w;}
//
//
//int d[105][105];
//int solve(int x , int y)
//{
//
//	if(!inRange(x,y))return -oo;
//	if(x==h)return M[x][y];
//	if(d[x][y]!=-1)
//		return d[x][y];
//	return d[x][y]=max(solve(x+1,y)+M[x][y] , max(solve(x+1,y-1)+M[x][y],solve(x+1,y+1)+M[x][y]));
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d%d",&h,&w);
//		for(int i = 1 ; i<=h ; i++)
//			for(int j = 1 ; j<=w ; j++)
//				scanf("%d",&M[i][j]);
//
//		int maxi=0;
//		int res=0;
//		memset(d,-1,sizeof d);
//		for(int i = 0 ; i<w;i++)
//		{
//			
//			d[0][i]=solve(0,i);
//			if(d[0][i]>maxi)
//				maxi=d[0][i];
//		}
//
//
//		cout<<maxi<<endl;
//
//	}
//	return 0;
//}
