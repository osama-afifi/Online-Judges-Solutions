//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cstdio>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//struct Node
//{
//	int a,b,c,cost;
//	Node()
//	{}
//	Node(int aa , int bb , int cc , int ccost) : a(aa), b(bb) , c(cc) , cost(ccost)
//	{}
//	bool operator <(const Node &a) const
//	{
//		return cost>a.cost;
//	}
//};
//
//int a,b,c,d;
//
//int ABS(int x)
//{
//if(x<0)return 0;
//else return x;
//}
//
//bool check(int x,int prev)
//{
//	if(x>=prev && x<=d)return true;
//	else return false;
//}
//
//int dist[201][201][201];
//bool vis[201][201][201];
//int const oo = 1<<27;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int test,kase=0;
//	scanf("%d",&test);
//
//	int n1,n2,cost;
//	while(test--)
//	{
//		scanf("%d%d%d%d",&a,&b,&c,&d);
//		memset(vis,0,sizeof vis);
//
//		//if(d<min(a,min(b,c)))
//		//{
//		//cout<<0<<" "<<0<<endl;
//		//continue;
//		//}
//
//		for(int i = 0 ; i<=a ; i++)
//			for(int j = 0 ; j<=b ; j++)
//				for(int k = 0 ; k<=c ; k++)
//					dist[i][j][k]=oo;
//
//		priority_queue <Node> DIJ;
//		Node cur = Node(0,0,c,0);
//		DIJ.push(cur);
//		bool found = false;
//		while(!DIJ.empty())
//		{
//			cur=DIJ.top();
//
//			//if(cur.a == d || cur.b == d || cur.c == d )		
//			//	break;
//
//			DIJ.pop();
//
//			//if(cur.a<0 || cur.b<0 || cur.c <0)continue;
//
//			if(cur.a && cur.b+cur.a<=b && cur.a<=b-cur.b && dist[0][cur.b+cur.a][cur.c]>cur.cost+cur.a)
//			{
//				DIJ.push(Node(0,cur.b+cur.a,cur.c,cur.cost+cur.a));
//				dist[0][cur.b+cur.a][cur.c]=cur.cost+cur.a;
//			}
//			if(cur.a && cur.c+cur.a<=c && cur.a<=c-cur.c && dist[0][cur.b][cur.c+cur.a]>cur.cost+cur.a)
//			{
//				DIJ.push(Node(0,cur.b,cur.c+cur.a,cur.cost+cur.a));
//				dist[0][cur.b][cur.c+cur.a]=cur.cost+cur.a;
//			}
//			if(cur.a && cur.a>=b-cur.b && dist[cur.a-(b-cur.b)][b][cur.c]>cur.cost+(b-cur.b))
//			{
//				DIJ.push(Node(cur.a-(b-cur.b),b,cur.c,cur.cost+(b-cur.b)));
//				dist[cur.a-(b-cur.b)][b][cur.c]=cur.cost+(b-cur.b);
//			}
//			if(cur.a &&  cur.a>=c-cur.c && dist[cur.a-(c-cur.c)][cur.b][c]>cur.cost+(c-cur.c) )
//			{
//				DIJ.push(Node(cur.a-(c-cur.c),cur.b,c,cur.cost+(c-cur.c)));
//				dist[cur.a-(c-cur.c)][cur.b][c]=cur.cost+(c-cur.c);
//			}
//
//			////
//
//			if(cur.b && cur.a+cur.b<=b && cur.b<=a-cur.a && dist[cur.a+cur.b][0][cur.c]>cur.cost+cur.b)
//			{
//				DIJ.push(Node(cur.a+cur.b,0,cur.c,cur.cost+cur.b));
//				dist[cur.a+cur.b][0][cur.c]=cur.cost+cur.b;
//			}
//			if(cur.b && cur.c+cur.b<=c  && cur.b<=c-cur.c && dist[cur.a][0][cur.c+cur.b]>cur.cost+cur.b)
//			{
//				DIJ.push(Node(cur.a,0,cur.c+cur.b,cur.cost+cur.b));
//				dist[cur.a][0][cur.c+cur.b]=cur.cost+cur.b;
//			}
//			if(cur.b && cur.b>=a-cur.a  && dist[a][cur.b-(a-cur.a)][cur.c]>cur.cost+(a-cur.a))
//			{
//				DIJ.push(Node(a,cur.b-(a-cur.a),cur.c,cur.cost+(a-cur.a)));
//				dist[a][cur.b-(a-cur.a)][cur.c]=cur.cost+(a-cur.a);
//			}
//			if(cur.b && cur.b>=c-cur.c && dist[cur.a][cur.b-(c-cur.c)][c]>cur.cost+(c-cur.c))
//			{
//				DIJ.push(Node(cur.a,cur.b-(c-cur.c),c,cur.cost+(c-cur.c)));
//				dist[cur.a][cur.b-(c-cur.c)][c]=cur.cost+(c-cur.c);
//			}
//
//			////
//
//			if(cur.c && cur.a+cur.c<=a && cur.c<=a-cur.a && dist[cur.a+cur.c][cur.b][0]>cur.cost+cur.c)
//			{
//				DIJ.push(Node(cur.a+cur.c,cur.b,0,cur.cost+cur.c));
//				dist[cur.a+cur.c][cur.b][0]=cur.cost+cur.c;
//			}
//			if(cur.c && cur.b+cur.c<=b &&  cur.c<=b-cur.b && dist[cur.a][cur.b+cur.c][0]>cur.cost+cur.c)
//			{
//				DIJ.push(Node(cur.a,cur.b+cur.c,0,cur.cost+cur.c));
//				dist[cur.a][cur.b+cur.c][0]=cur.cost+cur.c;
//			}
//			if(cur.c && cur.c>=a-cur.a  && dist[a][cur.b][cur.c-(a-cur.a)]>cur.cost+(a-cur.a))
//			{
//				DIJ.push(Node(a,cur.b,cur.c-(a-cur.a),cur.cost+(a-cur.a)));
//				dist[a][cur.b][cur.c-(a-cur.a)]=cur.cost+(a-cur.a);
//			}
//			if(cur.c && cur.c>=b-cur.b && dist[cur.a][b][cur.c-(b-cur.b)]>cur.cost+(b-cur.b))
//			{
//				DIJ.push(Node(cur.a,b,cur.c-(b-cur.b),cur.cost+(b-cur.b)));
//				dist[cur.a][b][cur.c-(b-cur.b)]=cur.cost+(b-cur.b);
//			}
//
//		}
//
//		int res=oo;
//		int prev=-1;
//		for(int i = 0 ; i<=a ; i++)
//			for(int j = 0 ; j<=b ; j++)
//				for(int k = 0 ; k<=c ; k++)
//				{
//					if(i<=d && (i==prev && dist[i][j][k]<res  || i>prev && dist[i][j][k]<oo  ))
//					{
//						res=dist[i][j][k];
//						prev=i;
//					}
//					if(j<=d && (j==prev && dist[i][j][k]<res  || j>prev && dist[i][j][k]<oo  ))
//					{
//						res=dist[i][j][k];
//						prev=j;
//					}
//				if(k<=d && (k==prev && dist[i][j][k]<res  || k>prev && dist[i][j][k]<oo  ))
//					{
//						res=dist[i][j][k];
//						prev=k;
//					}
//				}
//				if(abs(prev-d)<d)
//				cout<<res<<" "<<prev<<endl;
//				else
//					cout<<0<<" "<<prev<<endl;
//	}
//	return 0;
//
//
//}