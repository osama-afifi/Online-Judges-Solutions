
//
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
//bool vis1[100009];
//bool vis2[100009];
//map<int,int>M;
//set<int>S;
//int n,a,b;
//
//bool dfs(int cur, int q, bool vis[])
//{
//	if(S.find(q-cur)==S.end())
//		return false;
//	int idx = M[cur];
//	if(vis[idx])return true;
//	vis[idx]=1;
//	return dfs(q-cur,q,vis);
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//	while(cin>>n>>a>>b)
//	{
//		M.clear();
//		S.clear();
//		vector<int>V;
//		int num;
//
//		int c=0;
//		FOR(i,0,n)
//		{
//			cin>>num;V.push_back(num);
//			S.insert(num);
//			M[num]=c++;
//		}
//
//		Set(vis1,0);
//		bool b1=0,b2=0;
//		 b1= dfs(V[0],a,vis1);
//		bool ok1=0,ok2=0;
//		int c1=0,c2=0;
//		if(b1)
//		{
//			ok1=1;
//			FOR(i,0,n)
//			{
//				map<int,int>::iterator it;;
//				map<int,int>::iterator it2;
//				it = M.find(V[i]);
//
//
//				if(vis1[it->second])
//				{
//					it2 = M.find(a-V[i]);
//					if(it2==M.end() || vis1[it->second]!=vis1[it2->second])
//					{
//						ok1=false;
//						break;
//					}
//					c1++;
//				}
//				else
//				{
//					it2 = M.find(b-V[i]);
//					if(it2==M.end() || vis1[it->second]!=vis1[it2->second])
//					{
//						ok1=false;
//						break;
//					}
//					c2++;
//				}
//			}
//		}
//		//if(ok1) goto ANSWER;
//		Set(vis2,0);
//		b2= dfs(V[0],b,vis2);
//		ok2=0;
//		c1=c2=0;
//		if(b2)
//		{
//			ok2=1;
//			FOR(i,0,n)
//			{
//				map<int,int>::iterator it;
//				map<int,int>::iterator it2;
//				it = M.find(V[i]);
//
//
//				if(vis2[it->second])
//				{
//					it2 = M.find(b-V[i]);
//					if(it2==M.end() || vis2[it->second]!=vis2[it2->second])
//					{
//						ok2=false;
//						break;
//					}
//					c1++;
//				}
//				else
//				{
//					it2 = M.find(a-V[i]);
//					if(it2==M.end() || vis2[it->second]!=vis2[it2->second])
//					{
//						ok2=false;
//						break;
//					}
//					c2++;
//				}
//			}
//		}
//
//		ANSWER:
//		bool z = (c1==0 || c2==0) && (ok1&&ok2);
//		if( z || (ok1 || ok2) )
//		{
//			cout << "YES\n";
//			if(!z)
//			{
//			FOR(i,0,n)
//				cout << ((ok1) ? !vis1[M[V[i]]] : !vis2[M[V[i]]]) << " ";
//			}
//			else
//			{
//				cout << "1 ";
//				FOR(i,1,n)
//					cout << "0 ";
//			}
//			cout <<endl;
//		
//		}
//		else
//			cout <<"NO\n" ;
//
//	}
//
//	return 0;
//}
//
//
