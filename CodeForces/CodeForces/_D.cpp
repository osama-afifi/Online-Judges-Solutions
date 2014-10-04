//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<limits>
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
//vector<string>ess;
//vector< vector< LL > >G;
//vector< pair<LL,LL> >C;
//vector<bool>vis;
//vector< pair<LL,LL> >d;
//int n,m;
//string s,s1,s2;
//
//void toLower(string &s)
//{
//	FOR(i,0,s.length())
//		s[i] = tolower(s[i]);
//}
//LL cR(string &s)
//{
//	LL c=0;
//	FOR(i,0,s.length())
//		c += s[i]=='r';
//	return c;
//}
//
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>m)
//	{
//		C.clear();
//		G.clear();
//		ess.clear();
//		FOR(i,0,m)
//			cin>>s,toLower(s),ess.push_back(s);
//		map<string,int>M;
//		int c=0;
//		cin>>n;
//		G.resize(n*2+1);
//		
//		FOR(i,0,n)
//		{
//			cin>>s1;
//			toLower(s1);
//			if(M.find(s1)==M.end())
//			{
//				M[s1]=c++;
//				C.push_back(mp(-cR(s1),-(LL)s1.length()));
//			}
//			cin>>s2;
//			toLower(s2);
//			if(M.find(s2)==M.end())
//			{
//				M[s2]=c++;
//				C.push_back(mp(-cR(s2),-(LL)s2.length()));
//			}
//			G[M[s2]].push_back(M[s1]);
//			
//		}
//		vis.clear();
//		vis.resize(2*n+1);
//		d.clear();
//		d.resize(2*n+1,mp(-1e16,-1e16));
//		//
//		priority_queue< pair< pair<LL,LL> , int> > Q;
//		FOR(i,0,c)
//			Q.push(mp(C[i],i));
//		while(Q.size())
//		{
//			pair<LL,LL>c = Q.top().first;
//			int cur = Q.top().second;
//			Q.pop();
//			if(vis[cur])continue;
//			vis[cur]=1;
//			d[cur]=c;
//			FOR(i,0,G[cur].size())
//			{
//				int v =G[cur][i];
//				if(d[v]<c)
//				{
//					d[v]=c;
//					Q.push(mp(d[v],v));
//				}
//			
//			}
//		}
//
//		//
//		LL R=0;
//		LL L=0;
//		map<string,int>::iterator it;
//		FOR(i,0,ess.size())
//		{	
//			toLower(ess[i]);
//			it = M.find(ess[i]);
//			if(it==M.end())
//			{
//				R += cR(ess[i]);
//				L += (LL)ess[i].length();
//			}
//			else
//			{
//				pair<LL,LL> temp= d[it->second];
//				//temp =min(-C[it->second],-d[it->second]);
//				R -= temp.first;
//				L -= temp.second;
//			}
//		
//		}
//
//		cout << R << " " << L <<endl;
//
//	}
//	return 0;
//}