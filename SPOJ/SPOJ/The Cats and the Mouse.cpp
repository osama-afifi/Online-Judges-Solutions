//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//string text;
//int t,n;
//int oo =1<<25;
//
//vector< pair<int,int> >V;
//
//#define OPEN 1
//#define CLOSE 0
//
//int h,w,k;
//
//int arr[107][107];
//int mouse[107][107];
//int mx[]={1,-1,0,0};
//int my[]={0,0,1,-1};
//int vis[107][107];
//bool inRange(int x , int y)
//{ return x>=0 && x<h && y>=0 && y<w;}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(cin>>h>>w)
//	{
//		cin>>k;
//		pair<int,int>cat1;
//		pair<int,int>cat2;
//		pair<int,int>mouse;
//		while(k--)
//		{
//			Set(vis,0);
//			FOR(i,0,h)FOR(j,0,w)arr[i][j]=oo;
//			FOR(i,0,h)FOR(j,0,w)arr[i][j]=oo;
//			cin>>mouse.first>>mouse.second>>cat1.first>>cat1.second>>cat2.first>>cat2.second;
//			mouse.first--;
//			mouse.second--;
//			cat1.first--;
//			cat1.second--;
//			cat2.first--;
//			cat2.second--;
//			queue< pair< pair<int,int> ,int> > Q;
//
//			Q.push(make_pair(make_pair(cat1.first,cat1.second),0));
//			Q.push(make_pair(make_pair(cat2.first,cat2.second),0));
//			arr[cat1.first][cat1.second]=0;
//			arr[cat2.first][cat2.second]=0;
//			pair< pair<int,int> ,int>cur;
//			while(!Q.empty())
//			{
//				cur=Q.front();
//				Q.pop();
//
//				for(int i = 0 ; i< 4 ; i++)
//				{
//					int xx=cur.first.first+mx[i];
//					int yy=cur.first.second+my[i];
//					if(inRange(xx,yy))
//						if(arr[xx][yy]>arr[cur.first.first][cur.first.second]+1)
//						{
//							arr[xx][yy]=arr[cur.first.first][cur.first.second]+1;
//							Q.push(make_pair(make_pair(xx,yy),cur.second+1));
//						}
//				}
//
//			}
//			////
//			bool koko=0;
//			Q.push(make_pair(make_pair(mouse.first,mouse.second),0));
//			while(!Q.empty())
//			{
//				cur=Q.front();
//				Q.pop();
//
//				if(!inRange(cur.first.first,cur.first.second))
//				{koko=1;break;}
//				if(vis[cur.first.first][cur.first.second])continue;
//				vis[cur.first.first][cur.first.second]=1;
//				for(int i = 0 ; i< 4 ; i++)
//				{
//					int xx=cur.first.first+mx[i];
//					int yy=cur.first.second+my[i];
//					if(inRange(xx,yy) && arr[xx][yy]>cur.second+1)
//					{
//						Q.push(make_pair(make_pair(xx,yy),cur.second+1));
//					}
//					else if(!inRange(xx,yy))
//					{Q.push(make_pair(make_pair(xx,yy),cur.second+1));}
//
//
//				}
//
//			}
//
//			if(koko)
//				puts("YES");
//			else
//				puts("NO");
//
//		}
//
//	}
//
//
//
//
//	return 0;
//}