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
//int parent[30005];
//int group[1000];
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
//int sum[200001];
//int counter[200001];
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,n,m;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d%d",&n,&m);
//		for(int i = 1 ; i<=n ; i++)
//		{
//			parent[i]=i;
//			sum[i]=1;
//			counter[i]=0;
//		}
//
//		int index=1;
//		int n1,n2;
//		int maxi=0;
//		for(int i = 1 ; i<=m ; i++)
//		{
//			scanf("%d%d",&n1,&n2);
//			if(!isUnion(n1,n2))
//				makeUnion(n1,n2);
//		}
//
//		for(int i = 1 ; i<=n ; i++)
//			counter[getparent(i)]++;
//		for(int i = 1 ; i<=n ; i++)
//			if(counter[i]>maxi)
//				maxi=counter[i];
//		cout<<maxi<<endl;
//	}
//	return 0;
//}
