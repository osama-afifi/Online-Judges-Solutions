//                                                                     
//                                                                     
//                                                                     
//                                             
//#include<iostream>
//#include<string>
//#include<queue>
//#include<map>
//#include<set>
//#include<cstring>
//#include<vector>
//#include<limits.h>
//#include<iomanip>
//#include<stdio.h>
//#include<cmath>
//#include<stack>
//#include<algorithm>
//#include<sstream>
//using namespace std;
//
//
//int parent [752], ra[752];
//
//struct edge
//{
//	int start;
//	int end;
//	double weight;
//	edge( int s, int e, double w ): start(s) , end(e) , weight(w) {}
//	bool operator < ( const edge &that)const
//	{
//		return weight < that.weight ;
//	}
//};
//
//vector < edge > EdgeList;
//vector< pair < int , int > > points;
//set < pair<int,int> > S;
//int num , n , x,y;
//double dist;
//bool check;
//
//int find_parent( int node )
//{
//	return node == parent[node] ?  node :  parent[node]=find_parent( parent[node] );
//}
//
//void merge( int u , int v )
//{
//	if ( ra[u] > ra[v] )
//		parent[v] = u;
//	else 
//	{
//		parent[u]=v;
//		if ( ra[u] == ra[v] )
//			ra[v]++;
//	}
//}
//
//void kruskal()
//{
//	sort( EdgeList.begin() , EdgeList.end() );
//	int u,v;
//	double w;
//	for ( int i=0 ; i<=num ; i++ )
//	{
//		parent[i] = i;
//		ra[i] = 0;
//	}
//	for ( int i=0 ; i<EdgeList.size() ; i++ )
//	{
//		u = find_parent( EdgeList[i].start );
//		v = find_parent( EdgeList[i].end );
//		w = EdgeList[i].weight;
//		if ( u != v )
//		{
//			merge( u,v);
//			if ( w>0 )
//			{
//				cout<<EdgeList[i].start<<" "<<EdgeList[i].end<<endl;
//				check=false;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	freopen ( "input.in" , "r" , stdin );
//	int t;
//	cin>>t;
//
//	for ( int z=0 ; z<t ; z++ )
//	{
//		if ( z )
//			cout<<endl;
//		cin>>num;
//		check = true;
//		for ( int i=0 ; i<num ; i++ )
//		{
//			cin>>x>>y;
//			points.push_back ( make_pair(x,y) );
//		}
//		cin>>n;
//		for ( int i=0 ; i<n ; i++ )
//		{
//			cin>>x>>y;
//			EdgeList.push_back ( edge(x,y,-1) );
//		//	EdgeList.push_back ( edge(y,x,0) );
//			S.insert( make_pair(x,y) );
//		//	S.insert( make_pair(y,x) );
//		}
//		for ( int i=1 ; i<=num ; i++ )
//		{
//			for ( int j=i+1 ; j<=num ; j++ )
//			{
//		//	if ( ( S.find( make_pair( i, j ) ) == S.end() ) )
//				{
//					dist = sqrt( (double)( points[i-1].first-points[j-1].first )*( points[i-1].first-points[j-1].first ) + 
//						(double) ( points[i-1].second-points[j-1].second )*( points[i-1].second-points[j-1].second ));
//					EdgeList.push_back( edge( i,j,dist) );
//				//	EdgeList.push_back( edge( j,i,dist) );
//				}
//			}
//		}
//		
//		kruskal();
//		if ( check )
//			cout<<"No new highways need\n";
//		S.clear();
//		EdgeList.clear();
//		points.clear();
//	}
//}