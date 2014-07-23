//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <stdio.h>
//
//
//using namespace std;
//
//struct ord
//{
//	int b,d,c;
//	bool operator < (const ord &bb)const
//	{
//		return bb.b>b;
//	}
//};
//int const oo=1<<25;
//
//int n,t;
//ord O[10009];
//int d[10009];
//
//int bs(int start,int val)
//{
//	int l=start;
//	int h=n-1;
//	int mid=n-1;
//	int res=n-1;
//	while(l<=h)
//	{
//		mid=(h+l)/2;
//		if(O[mid].b<val)
//			l=mid+1;
//		else if(O[mid].b>=val)
//			h=mid-1;
//	}
//	return h+1;
//}
//
//int solve(int index)
//{
//	if(index>=n)return 0;
//	if(d[index]!=-1)
//		return d[index];
//	d[index]=0;
//
//	return d[index]=max(solve(index+1),solve(bs(index+1,O[index].b+O[index].d))+O[index].c);
//
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	scanf("%d",&t);
//	while(t--)
//	{
//		memset(d,-1,sizeof d);
//		scanf("%d",&n);
//		for(int i = 0 ; i<n ; i++)
//			scanf("%d%d%d",&O[i].b,&O[i].d,&O[i].c);
//		sort(O,O+n);
//		int res=solve(0);
//		printf("%d\n",res);
//
//	}
//	return 0;
//}
//
//
