////#include <iostream>
////#include <cstring>
////#include <string>
////#include <map>
////#include <algorithm>
////#include <queue>
////#include <vector>
////#include <stdio.h>
////
////using namespace std;
////
////int const oo = 1<<25;
////
////vector< pair< int ,vector<int> > > men;
////vector< pair< int ,vector<int> > > women;
////int main()
////{
////	freopen("input.in","r",stdin);
////
////	int t,n,x,dummy;
////	scanf("%d",&t);
////	while(t--)
////	{
////		men.clear();
////		scanf("%d",&n);
////		men.resize(n);
////		women.resize(n);
////
////		for(int i = 0 ; i<n ; i++)
////		{
////			men[i].second.resize(n);
////			for(int j = 0 ; j<=n ; j++)
////			{
////
////				if(!j)
////				{
////					scanf("%d",&dummy);
////					continue;
////				}
////
////				scanf("%d",&x);
////				men[i].second[x-1]=j-1;
////
////			}
////			men[i].first=-1;
////		}
////
////		for(int i = 0 ; i<n ; i++)
////		{
////			women[i].first=-1;
////			women[i].second.resize(n);
////			for(int j = 0 ; j<=n ;j++)
////			{
////				if(!j)
////				{
////					scanf("%d",&dummy);
////					continue;
////				}
////				scanf("%d",&x);
////				women[i].second[j-1]=x-1;
////			}
////		}
////
////		queue<int> Q;
////		int cur;
////		for(int i = 0 ; i < n  ; i++)
////			Q.push(i);
////		while(!Q.empty())
////		{
////			cur=Q.front();
////
////			for(int i = 0 ; i < n  ; i++)
////			{
////				if(men[i].first==-1)
////				{
////					men[i].first=cur;
////					women[cur].first=i;
////					Q.pop();
////					break;
////				}
////				else
////				{
////					if(men[i].second[men[i].first]>men[i].second[cur])
////					{
////						Q.pop();
////						Q.push(men[i].first);
////						women[men[i].first].first=-1;
////					
////						men[i].first=cur;
////						women[cur].first=i;
////						break;
////					}
////				
////				}
////			}
////
////}
////			for(int i = 0 ; i< n ;i++)
////				cout<<i+1<<" "<<women[i].first+1<<endl;
////
////
////		
////
////
////		if(t)putchar('\n');
////	}
////
////
////	return 0;
////}
//
//
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
//vector< pair< pair<int,int> ,vector<int> > > men;
//vector< pair< int ,vector<int> > > women;
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t,n,x,dummy;
//	scanf("%d",&t);
//	while(t--)
//	{
//		men.clear();
//		women.clear();
//		scanf("%d",&n);
//		men.resize(n);
//		women.resize(n);
//
//
//
//		for(int i = 0 ; i<n ; i++)
//		{
//			women[i].first=-1;
//			women[i].second.resize(n);
//			for(int j = 0 ; j<=n ;j++)
//			{
//				if(!j)
//				{
//					scanf("%d",&dummy);
//					continue;
//				}
//				scanf("%d",&x);
//				women[i].second[x-1]=j-1;
//			}
//		}
//		for(int i = 0 ; i<n ; i++)
//		{
//			for(int j = 0 ; j<=n ; j++)
//			{
//
//				if(!j)
//				{
//					scanf("%d",&dummy);
//					continue;
//				}
//
//				scanf("%d",&x);
//				men[i].second.push_back(x-1);
//
//			}
//			men[i].first.first=-1;
//			men[i].first.second=0;
//		}
//		queue<int> Q;
//		int cur;
//		for(int i = 0 ; i < n  ; i++)
//			Q.push(i);
//		while(!Q.empty())
//		{
//			cur=Q.front();
//
//
//			int prop=men[cur].second[men[cur].first.second];
//				if(women[prop].first==-1)
//				{
//					women[prop].first=cur;
//					men[cur].first.first=prop;
//					Q.pop();
//					//men[cur].first.second++;
//				}
//				else
//				{
//					if(women[prop].second[women[prop].first]>women[prop].second[cur])
//					{
//						Q.pop();
//						Q.push(women[prop].first);
//						men[women[prop].first].first.first=-1;
//						women[prop].first=cur;
//						men[cur].first.first=prop;
//					//	men[cur].first.second++;
//					}
//				}
//				men[cur].first.second++;
//			
//
//		}
//
//		for(int i = 0 ; i< n ;i++)
//			printf("%d %d\n",i+1,men[i].first.first+1);
//		//if(t)putchar('\n');
//	}
//	return 0;
//}
//
