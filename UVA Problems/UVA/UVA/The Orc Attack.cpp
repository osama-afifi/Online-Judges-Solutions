//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//int const oo = 1<<15;
//int path[150][150];
//int total[150];
//int t,n,m,n1,n2,cost,kase=0;
//
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//
//	cin>>t;
//	while(t--)
//	{
//
//		cin>>n>>m;
//		for(int i = 1 ; i<= n ; i++)
//			for(int j = 1 ; j<= n ; j++)
//				path[i][j]=oo;
//		for(int i = 0 ; i< m ; i++)
//		{
//			cin>>n1>>n2>>cost;
//			if(cost<path[n1][n2])
//				path[n1][n2]=path[n2][n1]=cost;
//		}
//
//		for(int k = 1 ; k<= n ; k++)
//			for(int i = 1 ; i<= n ; i++)
//				for(int j = 1 ; j<= n ; j++)
//				{
//					if(path[i][k]+path[k][j]<path[i][j])
//						path[i][j]=path[i][k]+path[k][j];			
//				}
//
//				int index;
//				int mini=oo;
//				int maxi=0;
//				int sol;
//				bool found=false;
//				for(int i = 6 ; i<= n ; i++)
//				{
//					index=path[i][1];
//					bool same=true;
//					maxi=0;
//					for(int j = 1 ; j<= 5 ; j++)
//						if(path[i][j]!=index)
//						{
//							same=false;
//							break;
//						}
//
//						if(same)
//						{
//							found=true;
//							for(int j = 1 ; j<= n ; j++)
//								if(j!=i && path[i][j]>maxi)
//								{
//									maxi=path[i][j];
//								}
//
//
//								if(maxi<mini)
//									mini=maxi;
//						}
//				}
//
//
//				if(mini<oo)
//					cout<<"Map "<<++kase<<": "<<mini<<endl;
//				else
//					cout<<"Map "<<++kase<<": "<<-1<<endl;
//	}
//	return 0;
//}