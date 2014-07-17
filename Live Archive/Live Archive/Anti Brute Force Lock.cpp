//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <map>
//#include <queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int dist(string s1 , string s2)
//{
//	int d=0;
//	for(int i = 0 ; i<4 ; i++)
//		d+=min(abs(s1[i]-s2[i]) , 10-(abs(s1[i]-s2[i])) );
//	return d;
//}
//string arr[509];
//int d[509][509];
//
//
//struct Edge
//{
//	int n1,n2,w;
//
//	bool operator < (const Edge a)const
//	{
//		return a.w>w;
//	}
//
//};
//
//Edge road[250003];
//
//int cmp(const void*a,const void*b)
//{
//	return ((Edge*)a)->w-((Edge*)b)->w;
//}
//
//
//int n;
//
//int forest[250003];
//int rankf[250003];
//int getForest(int i)
//{
//	if(i==forest[i])
//		return i;
//	else
//		return forest[i]=getForest(forest[i]);
//}
//
//bool isUnion(int a,int b)
//{
//	return (getForest(a)==getForest(b));
//}
//
//void makeUnion(int a,int b)
//{
//	int f1=getForest(a);
//	int f2=getForest(b);
//	if(rankf[f1]>rankf[f2])
//		swap(a,b);
//	forest[f1] = f2;
//	rankf[f2]++;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	int n;
//
//	string s;
//	cin>>t;
//	while(t--)
//	{
//		cin>>n;
//		for(int i=0;i<=n;i++)
//			{
//		forest[i]=i;
//		rankf[i]=0;
//		}
//
//		arr[0]="0000";
//		FOR(i,0,n)
//		{
//			cin>>s;
//			arr[i]=s;
//		}
//
//		int index=0;
//
//		FOR(i,0,n)
//			FOR(j,i+1,n)
//		{
//			road[index].n1=i;
//			road[index].n2=j;
//			road[index].w=dist(arr[i],arr[j]);
//			index++;
//		}
//
//		sort(road,road+index);
//		int j=0;
//		int res=0;
//		for(int i =0  ; i<index && j<n ; i++)
//		{
//			if(!isUnion(road[i].n1,road[i].n2))
//			{
//				makeUnion(road[i].n1,road[i].n2);
//				res+=road[i].w;
//				j++;
//			}
//		}
//		int mini=1<<25;
//		FOR(i,0,n)
//			mini=min(mini,dist(arr[i],"0000"));
//		printf("%d\n",res+mini);
//	}
//
//	return 0;
//}