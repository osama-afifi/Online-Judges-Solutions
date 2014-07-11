//#include <iostream>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//char C[25];
//int in[25];
//bool vis[25];
//int n,m;
//bool G[25][25];
//bool found;
//V.push_back
//void dfs(int node , int depth , string res)
//{
//	if(depth<n-1)
//	{
//		for(int i=0;i<n;i++)
//			if(i!=node && G[node][i])
//				in[i]--;
//
//		for(int i=0;i<n;i++)
//			if(!vis[i] && in[i]==0 )
//			{
//				vis[i]=true;
//				dfs(i,depth+1,res+" "+(char)C[i]);
//				vis[i]=false;
//			}
//			for(int i=0;i<n;i++)
//				if(i!=node && G[node][i])
//					in[i]++;
//	}
//	else
//	{
//		cout<<res<<endl;
//		found=true;
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	string text;
//	scanf("%d",&t);
//	cin.ignore();
//	while(t--)
//	{
//		found=false;
//		cin.ignore();
//		getline(cin,text);
//
//		map<char,int> M;
//
//		memset(G,0,sizeof G);
//		memset(in,0,sizeof in);
//		memset(vis,0,sizeof vis);
//
//		stringstream ss;
//		ss<<text;
//		char ch;
//		indx=0;
//
//		while(ss>>ch)
//		{
//			if(M.find(ch)==M.end())
//				M[ch]=indx++;
//			C[M[ch]]=ch;
//		}
//
//		getline(cin,text);
//		ss.clear();
//		ss<<text;
//
//		while(ss>>text)
//		{
//			G[M[text[0]]][M[text[2]]]=1;
//			in[M[text[2]]]++;
//		}
//
//		for(int i = 0 ; i < indx ; i++)
//			if(in[i]==0)
//			{
//				vis[i]=1;
//				string x;
//				x.append(1,C[i]);
//				dfs(i,0,x);
//				vis[i]=0;
//			}
//			
//	}
//	return 0;
//}