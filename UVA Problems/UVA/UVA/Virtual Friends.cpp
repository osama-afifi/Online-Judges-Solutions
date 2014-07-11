//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <queue>
//#include <map>
//#include <vector>
//#include <math.h>
//#include <set>
//
//using namespace std;
//
//int parent[200005];
//
//int getparent(int i)
//{
//	if(parent[i]==i)
//		return i;
//	else
//		return parent[i]=getparent(parent[i]);
//}
//
//bool isUnion(int a , int b)
//{
//	return getparent(parent[a])==getparent(parent[b]);
//}
//
//void makeUnion(int a,int b)
//{
//	parent[getparent(a)] = getparent(b);
//}
//
//vector< vector<int> > V;
//int sum[200005];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,n;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d",&n);
//		for(int i = 1 ; i<=n*2 ; i++)
//		{
//			parent[i]=i;
//			sum[i]=1;
//		}
//		map<string,int>M;
//		
//		
//			string text1,text2;
//
//		int index=1;
//		for(int i = 1 ; i<=n ; i++)
//		{
//			cin>>text1>>text2;
//			if(!M[text1])a
//				M[text1]=index++;
//			if(!M[text2])
//				M[text2]=index++;
//
//			int p1=getparent(M[text1]);
//			int p2=getparent(M[text2]);
//			if(p1!=p2)
//			{
//				sum[p1]+=sum[p2];
//				parent[p2]=parent[p1];
//			}
//			printf("%d\n",sum[p1]);
//	
//		}
//
//	}
//	return 0;
//}
