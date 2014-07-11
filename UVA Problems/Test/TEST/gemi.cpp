//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string.h>
//#include<stdio.h>
//using namespace std;
//#define SIZE 20
//
//struct Graph {
//vector < vector<int> > AdjList;
//void intialize(){
//	AdjList.resize(20);
//}
//void insertEdge( int from , int to , bool directed ) {
//	AdjList[from].push_back(to);
//	if (!directed)
//	AdjList[to].push_back(from);
//}
//};
//Graph g;
//bool visited[SIZE];
//int cost[SIZE];
//int Path[SIZE];
//
//void initialzeBfs()
//{
//	memset( visited , false , sizeof(visited) ); 
//	memset(cost , 9999 , sizeof(cost));
//	memset(Path,-1,sizeof(Path));
//}
//
//void BFS( int Source , int Destination )
//{
//	queue<int> q;
//	int node;
//	visited[Source] = true;
//	cost[Source] = 0;
//	Path[Source] = -1;
//
//	q.push(Source);
//
//	while ( !q.empty() )
//	{
//		node = q.front();
//		q.pop();
//
//		int x = g.AdjList[node].size();
//		for ( int i=0 ; i<x ; i++ )
//		{
//			int Child = g.AdjList[node][i];
//
//			if ( !visited[Child] )
//			{
//				q.push(Child);
//				visited[Child] = true;
//				cost[Child] = cost[node] + 1;
//				Path[Child] = node;
//			}
//		}
//	}
//}
//int main ()
//{
//	freopen("input.in","r",stdin);
////	freopen("out.out","w",stdout);
//
//	int n = 18 ,NumOfnodes,Node, Quiries , Count = 0,count1=0,a,b;
//
//	
//	
//	g.intialize();
//	initialzeBfs();
//	while ( cin >> NumOfnodes )
//	{
//		count1++;
//		for ( int i = 0 ;i<NumOfnodes ; i++)
//		{
//			cin >> Node;
//			g.insertEdge(Count , Node-1 , true );
//
//		}
//		Count++;
//	while ( n-- )
//	{
//		
//		cin >> NumOfnodes;
//		for ( int i = 0 ;i<NumOfnodes ; i++)
//		{
//			cin >> Node;
//			/*g.AdjList[Count].clear();*/
//			g.insertEdge(Count , Node-1 , true );
//
//		}
//		Count++;
//	}
//	
//	cin >> Quiries;
//	cout<<"Test Set #"<<count1<<endl;
//	for ( int i=0 ; i<Quiries; i++)
//	{
//		cin >> a >> b;
//		BFS(a,b);
//
//		cout<<a<<" to "<<b<<": "<<cost[b-1];
//
//		/*while ( Path[b-1] != -1 )
//		{
//			v1.push_back(Path[b-1]);
//			b = Path[b-1];
//		}
//		cout<<a<<" to "<<b<<": "<<v1.size();
//		v1.clear();*/
//	}
//
//	}
//return 0;
//}