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
//int n,m;
//vector< vector<int> > GM;
//vector< vector<int> > MG;
//int mvis[30005];
//int gvis[30005];
//int counter=0;
//void dfs_MG(int member);
//void dfs_GM(int group)
//{
//	for(int i = 0 ; i<GM[group].size() ; i++)
//		if(!mvis[GM[group][i]])
//		{
//			mvis[GM[group][i]]=true;
//			counter++;
//if(!gvis[GM[group][i]])
//			dfs_MG(GM[group][i]);
//		}
//
//}
//
//void dfs_MG(int member)
//{
//	for(int i = 0 ; i<MG[member].size() ; i++)
//		if(!gvis[MG[member][i]])
//		{
//			gvis[MG[member][i]]=true;
//			if(!mvis[MG[member][i]])
//			dfs_GM(MG[member][i]);
//		}
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d%d",&n,&m))
//	{
//		counter=1;
//		memset(gvis, 0, sizeof(gvis));
//		memset(mvis, 0, sizeof(mvis));
//		if(n==0 && m==0)break;
//		GM.clear();
//		MG.clear();
//		GM.resize(m);
//		MG.resize(n+1);
//		int num,no,s1,s2;
//		
//		for(int i = 0 ; i<m ; i++)
//		{
//			gvis[i]=false;
//			scanf("%d",&no);
//			while(no--)
//			{		
//				scanf("%d",&num);
//				mvis[num]=false;
//				GM[i].push_back(num);
//				MG[num].push_back(i);
//			}
//
//		}
//
//		mvis[0]=true;
//		dfs_MG(0);
//		printf("%d\n",counter);
//	}
//	return 0;
//}
