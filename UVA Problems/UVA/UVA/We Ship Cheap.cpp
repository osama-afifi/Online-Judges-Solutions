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
//int path[1003];
//bool vis[1003];
//string city[1003];
//int n1,n2,cost,kase=0,s,t,w;
//map <string,int> M;
//
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//vector< vector<int> > V;
//
//bool BFS(int s,int t)
//{
//	queue<int> BFS;
//
//	BFS.push(s);
//	int current;
//	while(!BFS.empty())
//	{
//		current=BFS.front();
//
//		BFS.pop();
//
//		if(current==t)
//			return true;
//
//		for(int i=0 ; i<V[current].size() ; i++)
//		{
//			if(!vis[V[current][i]])
//			{
//				path[current]=V[current][i];
//				vis[V[current][i]]=true;
//				BFS.push(V[current][i]);
//			}
//		}
//	}
//	return false;
//}
//
//void printpath(int s,int t)
//{
//
//	for(int i =s ; i!=t ; i=path[i] )
//		cout<<city[i]<<" "<<city[path[i]]<<endl;
//
//
//	//if(path[i]==s)
//	//{
//	//	cout<<city[path[i]]<<" "<<city[i]<<endl;
//	//	return;
//	//}
//	//else
//	//{
//	//printpath(s,path[i]);
//
//	//cout<<city[path[i]]<<" "<<city[i]<<endl;
//	//}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	bool first=true;
//	int n,m;
//
//	while(scanf("%d",&m)==1)
//	{
//		memset(vis,0,sizeof vis);
//		V.clear();
//		V.resize(m*2+1);
//		if(!first)
//			putchar('\n');
//		first=false;
//		string text1,text2;
//		n=0;
//		M.clear();
//
//		for(int i=0;i<m;i++)
//		{
//			cin>>text1>>text2;
//			if(M.find(text1)==M.end())
//			{
//				M[text1]=n;
//				city[n++]=text1;
//			}
//			if(M.find(text2)==M.end())
//			{
//				M[text2]=n;
//				city[n++]=text2;
//			}
//			V[M[text1]].push_back(M[text2]);
//			V[M[text2]].push_back(M[text1]);
//		}
//
//		cin>>text1>>text2;
//		if((text1!=text2) && (m==0 || M.find(text1)==M.end() || M.find(text2)==M.end()))
//		{
//			puts("No route");
//			continue;
//		}
//		else if(text1==text2)
//		{
//			cout<<text1<<" "<<text2<<endl; 
//			continue;
//		}
//		if(BFS(M[text1],M[text2]))
//		{
//			printpath(M[text1],M[text2]);
//		}
//		else
//			puts("No route");
//	}
//	return 0;
//}