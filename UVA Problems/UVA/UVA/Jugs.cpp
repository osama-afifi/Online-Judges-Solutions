//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int A,B,N;
//
//void give(int &j1, int &c1, int &j2, int &c2)
//{
//	if(j1<=c2-j2)
//		j2+=j1,j1=0;
//	else
//		j1-=(c2-j2),j2=c2;
//}
//
//struct pos
//{
//	int a,b;
//	pos(int aa ,int bb)
//	{a=aa,b=bb;}
//	pos(){}
//};
//
//bool vis[1005][1005];
//
//struct node
//{
//	int type;
//	node* gat;
//	node(){};
//	node(int t , node*g)
//	{type=t,gat=g;}
//};
//
//
////fill A
////fill B
////empty A
////empty B
////pour A B
////pour B A
////success
//
//node P[1005][1005];
//string	ans[]={"empty A","empty B","fill A","fill B","pour A B","pour B A"};
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	//0 empty
//	//1 fill
//	//pass
//	while(scanf("%d%d%d",&A,&B,&N)==3)
//	{
//		Set(vis,0);
//		queue<pos>Q;
//		pos c;
//		Q.push(pos(0,0));
//		vis[0][0]=1;
//		while(!Q.empty())
//		{
//			c=Q.front();
//			Q.pop();
//			if(c.a ==N || c.b ==N)break;
////			if(vis[c.a][c.b])continue;
//		//	vis[c.a][c.b]=1;
//			int t1,t2;
//
//			t1=c.a,t2=c.b;
//
//			//empty 0
//			if(c.a && !vis[0][c.b])
//			{
//				Q.push(pos(0,c.b));
//				P[0][c.b]=node(0,&P[c.a][c.b]);
//				vis[0][c.b]=1;
//			}
//			if(c.b && !vis[c.a][0])
//			{
//				Q.push(pos(c.a,0));
//				P[c.a][0]=node(1,&P[c.a][c.b]);
//				vis[c.a][0]=1;
//			}
//
//			//fill
//			if(c.a!=A && !vis[A][c.b])
//			{
//				Q.push(pos(A,c.b));
//				P[A][c.b]=node(2,&P[c.a][c.b]);
//				vis[A][c.b]=1;
//			}
//			if(c.b!=B && !vis[c.a][B])
//			{
//				Q.push(pos(c.a,B));
//				P[c.a][B]=node(3,&P[c.a][c.b]);
//				vis[c.a][B]=1;
//			}
//
//
//			t1=c.a,t2=c.b;
//			give(t1,A,t2,B);
//			if(!vis[t1][t2])
//			{
//				Q.push(pos(t1,t2));
//				P[t1][t2]=node(4,&P[c.a][c.b]);
//				vis[t1][t2]=1;
//			}
//
//
//			t1=c.a,t2=c.b;
//			give(t2,B,t1,A);
//			if(!vis[t1][t2])
//			{
//				Q.push(pos(t1,t2));
//				P[t1][t2]=node(5,&P[c.a][c.b]);
//				vis[t1][t2]=1;
//			}
//		}
//		node* start;
//		start = &P[c.a][c.b];
//		node *i;
//
//		stack<int>S;
//		for(i=start ; i ; i=i->gat)
//		{
//			S.push(i->type);
//		}
//		S.pop();
//		while(!S.empty())
//		{
//				cout<<ans[S.top()]<<endl;
//				S.pop();		
//		}
//		cout<<"success"<<endl;
//		
//	}
//	return 0;
//}
