//#include <iostream>
//#include <cstring>
//#include <string>
//#include <map>
//#include <algorithm>
//#include <queue>
//#include <vector>
//#include <stdio.h>
//
//using namespace std;
//
//int const oo = 1<<25;
//
//struct cube
//{
//	int x,y,z;
//	cube()
//	{}
//	cube(int xx, int yy , int zz): x(xx),y(yy),z(zz)
//	{}
//};
//
//int n,t;
//vector<cube>V;
//int d[155];
//int solve(int index)
//{
//	if(d[index]!=-1)
//		return d[index];
//	int maxi=0;
//	for(int i = 0 ; i<V.size() ; i++)
//		if(i!=index && ( V[index].x>V[i].x && V[index].y>V[i].y ||  V[index].x>V[i].y && V[index].y>V[i].x ) )
//			maxi=max(maxi,solve(i));
//
//	return d[index]=maxi+V[index].z;
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//
//	while(scanf("%d",&n)==1)
//	{
//		if(!n)break;
//		V.clear();
//		int x,y,z;
//		for(int i = 0 ; i< n ; i++)
//		{
//			scanf("%d%d%d",&x,&y,&z);
//			V.push_back(cube(x,y,z));
//			V.push_back(cube(y,z,x));
//			V.push_back(cube(z,x,y));
//
//		}
//		memset(d,-1,sizeof d);
//		int res=0;
//		for(int i = 0 ; i<V.size() ; i++)
//		res=max(res,solve(i));
//
//		printf("%d\n",res);
//	}
//
//	return 0;
//}
