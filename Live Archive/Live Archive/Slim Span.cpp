//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<algorithm>
//#include<map>
//#include<stdio.h>
//#include<algorithm>
//#include<math.h>
//
//using namespace std;
//
//struct Edge
//{
//	int n1,n2,w;
//	 bool operator < (Edge a) const
//    {
//        return w < a.w;
//    }
//};
//
//Edge road[10020];
//
//int n,m;
//
//int forest[120];
//
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
//	forest[getForest(a)] = getForest(b);
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,r,n1,n2,cost,kase=0,k;
//	bool first=true;
//	while(scanf("%d %d",&n,&m)==2)
//	{
//		if(!n && !m)break;
//		for(int i=0;i<m;i++)
//			scanf("%d%d%d",&road[i].n1,&road[i].n2,&road[i].w);
//
//		sort(road,road+m);
//		bool ok = 0;
//		int diff =1<<25;
//		for(int k = 0 ; k<m ; k++)
//		{
//			for(int i=0;i<=n;i++)
//				forest[i]=i;
//			
//		int links=0;
//
//			int mx =0 , mn = 1<<25;
//			
//			int temp =-1;
//			for(int i = k; i<m && links<n-1  ; i++)
//			{
//				if (!isUnion(road[i].n1,road[i].n2))
//				{
//					links++;
//					makeUnion(road[i].n2,road[i].n1);
//					if(links==n-1)
//					temp =  road[i].w-road[k].w;
//					//mx = max(mx , road[i].w);
//					//mn = min(mn , road[i].w);
//				}
//			}
//			bool here = 0;
//			if(links == n-1)
//			here = 1;
//
//				if(here)
//				diff = min(diff ,temp); 
//				ok|=here;
//				if(!here)break;
//		}
//		
//			if(!ok || !m || diff >=1<<25) cout<< -1 <<endl;
//			else
//				cout<<diff<<endl;		
//	}
//
//	return 0;
//}