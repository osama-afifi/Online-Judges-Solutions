//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <queue>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//struct POS
//{
//	int node,cost;
//	char ch;
//	bool vis;
//
//	bool operator <(const POS &a) const
//	{
//		return cost>a.cost;
//	}
//};
//
//vector <POS> LINK [4001];
//
//int dijkstra(int s , int t)
//{
//	priority_queue <POS> DIJ;
//	POS start = {s, 0 , 0 , false};
//	DIJ.push(start);
//	bool found = false;
//	////
//	POS current;
//	while(!DIJ.empty())
//	{
//		current=DIJ.top();
//
//		if(current.node == t)		
//			return current.cost;
//
//		DIJ.pop();
//
//		int s=LINK[current.node].size();
//		for(int i=0;i<s;i++)
//		{
//			if(!LINK[current.node][i].vis && ( LINK[current.node][i].ch != current.ch || current.cost==0 ))
//			{
//				LINK[current.node][i].vis=true;
//				POS temp = { LINK[current.node][i].node , current.cost+LINK[current.node][i].cost , LINK[current.node][i].ch };
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
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int m,n;
//	string n1,n2,temp;
//	int cost;
//	string slang ,elang;
//
//	while(cin>>m)
//	{
//		if(m==0)break;
//		map <string , int> M;
//
//		cin>>slang>>elang;
//
//		for(int i = 0 ; i < m ; i++)
//			LINK[i].clear();
//
//		int index=0,s,e;
//
//		for(int i = 0 ; i < m ; i++)
//		{
//		cin>>n1>>n2>>temp;
//
//
//			if(M.find(n1)==M.end())
//			{
//				if(n1==elang)
//					e=index;
//				if(n1==slang)
//					s=index;
//				LINK[index].clear();
//				M[n1]=index++;
//			}
//			if(M.find(n2)==M.end())
//			{
//				if(n2==elang)
//					e=index;
//				if(n2==slang)
//					s=index;
//				LINK[index].clear();
//				M[n2]=index++;
//			}
//
//			POS temp1 = { M[n2] , temp.length() , temp[0] , false };
//			POS temp2 = { M[n1] , temp.length() , temp[0] , false };
//			LINK[M[n1]].push_back(temp1);
//			LINK[M[n2]].push_back(temp2);
//
//			//VIS[M[n2]]/*[M[n1]]*/=VIS[M[n1]]/*[M[n2]]*/=false;
//		}
//
//		if(slang==elang){
//			printf("0\n");
//			continue;
//		}
//
//		if(M.find(slang)==M.end() || M.find(elang)==M.end()){
//			printf("impossivel\n");
//			continue;
//		}
//		int res=dijkstra(s ,e);
//		if(res!=-1)
//		{
//			printf("%d\n",res);
//			continue;
//		}
//		else
//			printf("impossivel\n");
//	}
//	return 0;
//}
//
