//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cstring>
//#include <algorithm>
//#include <map>
//#include <queue>
//#include <vector>
//#include <stdio.h>
//
//using namespace std;
//
//int const oo = 1<<25;
//int n,m,t;
//bool inRange(const int &a , const int & b )
//{return (a<m && b<n && a>=0 && b>=0 );}
//
//int mx[]={1,-1,0,0};
//int my[]={0,0,1,-1};
//
//char MAP[200][200];
//int d[200][200];
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d%d",&m,&n);
//		for(int i = 0 ; i < m ; i++)
//			for(int j = 0 ; j < n ; j++)
//			{
//				d[i][j]=oo;
//				cin>>MAP[i][j];
//			}
//
//
//			queue< pair <pair <int,int> , int > > Q;
//			for(int i = 0 ; i < m ; i++)
//				for(int j = 0 ; j < n ; j++)
//					if(MAP[i][j]=='1')
//					{
//						d[i][j]=0;
//						Q.push(make_pair(make_pair(i,j),0));
//					}					
//					pair <pair <int,int> , int > c;
//					while(!Q.empty())
//					{
//						c=Q.front();
//						Q.pop();
//
//						for(int k = 0 ; k < 4 ; k++)
//						{
//							if(inRange(c.first.first+mx[k],c.first.second+my[k]) && d[c.first.first+mx[k]][c.first.second+my[k]]>d[c.first.first][c.first.second]+1)
//							{
//								d[c.first.first+mx[k]][c.first.second+my[k]]=d[c.first.first][c.first.second]+1;
//								Q.push(make_pair(make_pair(c.first.first+mx[k],c.first.second+my[k]),c.second+1));
//							}
//
//						}
//
//					}
//
//
//					for(int i = 0 ; i < m ; i++)
//					{
//						for(int j = 0 ; j < n; j++)
//							if(j)
//							printf(" %d",d[i][j]);
//							else
//								printf("%d",d[i][j]);
//						putchar('\n');
//					}
//	}
//	return 0;
//}
