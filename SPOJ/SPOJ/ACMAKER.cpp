//
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//using namespace std;
//typedef unsigned long long LL;
//
//vector<string>V;
//string abr;
//int n;
//int d[200][200];
//vector<int>P;
//LL solve(int idx, int q , int match)
//{
//	if(idx==n && match==abr.size())
//		return 1;
//	if(idx==n || q == V[idx].size() || match==abr.size())
//		return 0;
//	int combi = P[idx]+q;
//	if(d[combi][match]!=-1)
//		return d[combi][match];
//	LL sum = 0;
//	FOR(i,q,V[idx].size())
//			if(abr[match]==V[idx][i])
//			{
//				sum += solve(idx,i+1, match+1);
//				sum += solve(idx+1,0, match+1);
//			}
//	return d[combi][match] = sum;
//}
//
//void print(int idx, int q, int match, vector<pair< int,int> > P)
//{
//	if(idx==n && match==abr.size())
//	{
//		FOR(i,0,P.size())
//			cout << "(" << V[P[i].first] << "," << P[i].second << ") " ;
//		cout<<endl;
//	}
//	if(idx==n || match==abr.size())
//		return;
//	FOR(i,q,V[idx].size())
//			if(abr[match]==V[idx][i])
//			{
//				vector<pair< int,int> > temp = P;
//				temp.push_back(mp(idx,i));
//				print(idx,i+1, match+1 ,  temp);
//				print(idx+1,0 ,  match+1 , temp);
//			}
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int m;
//	while(cin>>m)
//	{
//		if(!m)break;
//		set<string> o;
//		string temp;
//		FOR(i,0,m)
//		{
//			
//			cin>>temp;
//			o.insert(temp);
//		}
//		cin.ignore();
//		while(getline(cin,temp))
//		{
//			if(temp=="LAST CASE")break;
//			Set(d,-1);
//			V.clear();
//			P.clear();
//			stringstream ss;
//			ss<<temp;
//			ss>>abr;
////			P.push_back(0);
//			FOR(i,0,abr.size())
//				abr[i] = tolower(abr[i]);
//			while(ss>>temp)
//			{
//					
//				if(o.find(temp)==o.end())
//				{					V.push_back(temp);
//				}
//			}
//			n = V.size();
//			P.resize(n);
//			FOR(i,1,n)
//				P[i] = P[i-1]+V[i-1].size();
//			LL res = solve(0,0,0);
//			vector< pair<int,int> >X;
////			print(0,0,0,X);
//			FOR(i,0,abr.size())
//				abr[i] = toupper(abr[i]);
//			if(res>0)
//			cout << abr<< " can be formed in " << res << " ways" << endl;
//			else
//			cout << abr << " is not a valid abbreviation" <<endl;
//		}	
//	
//	}
//
//
//	return 0;
//}
