//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//bool vis[200009];
//bool p[200009];
//vector<int>P;
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int n;
//	
//	while(cin>>n)
//	{
//		Set(vis,0);
//		Set(p,0);
//
//		for(int i=2 ; i*i<=n  ; i++)
//			if(!p[i])
//				for(int j=i*i;j<=n;j+=i)
//					p[j]=1;
//		for(int i=2 ; i<=n  ; i++)
//			if(!p[i])
//				P.push_back(i);
//		vector<int>E;
//		vector< pair<int,int> >ans;
//		for(int i=P.size()-1 ; i>=0  ; i--)
//		{
//			if(!vis[P[i]])
//			{
//				vector<int>temp;
//				for(int j=P[i];j<=n;j+=P[i])
//					if(!vis[j])
//					{
//						vis[j]=1;
//						temp.push_back(j);
//					}
//
//
//					if(temp.size()<=1)
//					{}
//					else if(temp.size()%2==0)
//						for(int j=0;j<temp.size();j+=2)
//							ans.push_back(mp(temp[j],temp[j+1]));
//					else
//
//					{
//						//if(2*P[i]<=n)
//						//	E.push_back(2*P[i]);
//						vis[2*P[i]]=0;
//						ans.push_back(mp(temp[0],temp[2]));
//						for(int j=3;j<temp.size();j+=2)
//							ans.push_back(mp(temp[j],temp[j+1]));
//					}
//			}
//		
//		}
//
//		
//		/*FOR(i,2,n+1)
//			if(!vis[i] && i%2==0)
//				E.push_back(i);
//*/
//		bool b=0;
//		int p=-1;
//		FOR(i,0,E.size()-(E.size()%2==1))
//		{
//			b^=1;
//			if(!b)
//				ans.push_back(mp(p,E[i]));
//			p=P[i];
//		}
//
//		cout << ans.size() <<endl;
//		FOR(i,0,ans.size())
//			cout << ans[i].first << " " << ans[i].second <<endl;
//	}
//
//	return 0;
//}	