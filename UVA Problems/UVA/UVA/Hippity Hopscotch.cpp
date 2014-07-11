////#include <iostream>
////#include <stdio.h>
////#include <string>
////#include <queue>
////#include <vector>
////#include <map>
////
////using namespace std;
////
////struct Node
////{
////	int x,y,counter;
////	bool vis;
////
////	Node()
////	{}
////	Node(int n , int c ) : x(n) , y(c)
////	{}
////	Node(int n , int c , int v) : x(n) , y(c) , counter(v)
////	{}
////
////};
////
////vector < vector<int> > Graph;
////int n,k,t,kase=0;
////int maxi;
////int da5l[105][105];
////int MAP[105][105];
////int vis[105][105];
////
////int movex[]={-1,0,1,0};
////int movey[]={0,1,0,-1};
////
////bool inRange(int x , int y)
////{return (x>=0 && y>=0 && x<n && y<n);}
////
////int main()
////{
////	freopen("input.in","r",stdin);
////
////	scanf("%d",&t);
////	while(t--)
////	{
////
////		scanf("%d%d",&n,&k);
////
////		for(int i = 0 ; i <=n ; i++)
////			for(int j = 0 ; j <n ; j++)
////				vis[i][j]=0;
////
////		for(int i = 0 ; i <n ; i++)
////			for(int j = 0 ; j <n ; j++)
////				scanf("%d",&MAP[i][j]);
////
////
////		maxi=0;
////
////
////
////		queue< Node > BFS;
////		BFS.push(Node(0,0,MAP[0][0]));
////		Node current;
////		int maxi=0;
////		int fin=n;
////
////		while(!BFS.empty())
////		{
////			current=BFS.front();
////
////			if(current.counter>maxi)
////				maxi=current.counter;
////
////			BFS.pop();
////
////			for(int i = 0 ; i<4 ; i++)
////			{
////				for(int j = 1 ; j <=k ; j++)
////					if(inRange(current.x+j*movex[i],current.y+j*movey[i]))
////						if(MAP[current.x+j*movex[i]][current.y+j*movey[i]]>=MAP[current.x][current.y])
////						{
////							BFS.push(Node(current.x+j*movex[i],current.y+j*movey[i],current.counter+MAP[current.x+j*movex[i]][current.y+j*movey[i]]));
////						}
////						else break;
////			}
////
////		}
////		cout<<maxi<<endl;
////
////	}
////	return 0;
////}
////
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
//int MAP[1001][1001];
//int const oo =1<<25;
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,n,k,s,n1,n2,kase=0;
//	scanf("%d",&t);
//	while(t--)
//	{
//scanf("%d%d",&n,&k);
//
//		for(int i = 0 ; i <=n ; i++){
//			for(int j = 0 ; j <=n ; j++)
//				path[i][j]=-oo;
//			path[i][i]=0;
//		}
//
//			for(int i = 0 ; i <n ; i++)
//			for(int j = 0 ; j <n ; j++)
//				scanf("%d",&MAP[i][j]);	
//
//
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
