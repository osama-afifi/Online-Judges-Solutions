//
//#include <cstring>
//#include <cstdio>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//struct Node
//{
//	int node,cost;
//
//	bool operator <(const Node &a) const
//	{
//
//		return cost>a.cost;
//
//	}
//};
//
//vector <Node>  LINK[20001];
//bool VIS[20001][20001];
//
//int dijkstra(int n ,int s , int t)
//{
//	priority_queue <Node> DIJ;
//	Node start = { s,0};
//	DIJ.push(start);
//	bool found = false;
//	////
//	Node current;
//	while(!DIJ.empty())
//	{
//		current=DIJ.top();
//
//		if(current.node == t)		
//			return current.cost;
//
//		DIJ.pop();
//
//		for(int i=0;i<LINK[current.node].size();i++)
//		{
//			if(!VIS[current.node][LINK[current.node][i].node]/* && i!=current.node */)
//			{
//				VIS[current.node][LINK[current.node][i].node]=VIS[LINK[current.node][i].node][current.node]=true;
//				Node temp = { LINK[current.node][i].node , current.cost+LINK[current.node][i].cost };
//				DIJ.push(temp);				
//
//			}
//		}
//
//	}
//	return -1;
//}
//
//
//
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int test,kase=0;
//
//	scanf("%d",&test);
//
//
//	int m,n,s,t;
//	int n1,n2,cost;
//	while(test--)
//	{
//	//	memset(LINK,-1,sizeof(LINK));	
//	//	memset(VIS,false,sizeof(VIS));
//
//		scanf("%d%d%d%d",&n,&m,&s,&t);
//		for(int i = 0 ; i < n ; i++)
//			LINK[i].clear();
//
//		for(int i = 0 ; i < m ; i++)
//		{
//			scanf("%d%d%d",&n1,&n2,&cost);
//			Node temp1 = { n2 , cost };
//			Node temp2 = { n1 , cost };
//			LINK[n1].push_back(temp1);
//			LINK[n2].push_back(temp2);
//
//			VIS[n2][n1]=VIS[n1][n2]=false;
//		}
//
//		int res=dijkstra(n, s ,t);
//
//		if(res!=-1)
//			printf("Case #%d: %d\n",++kase,res);	
//		else
//			printf("Case #%d: unreachable\n",++kase);
//
//
//	}
//
//
//	return 0;
//}
//
