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
//bool p[100009];
//vector<int>P;
//
//void sieve(int n=100000)
//{
//	p[1]=1;
//	for(int i = 2 ; i*i <=n ; i++)
//		if(!p[i])
//			for(int j=i*i ; j<=n ; j+=i)
//				p[j]=1;
//	FOR(i,2,n+1)
//		if(!p[i])
//			P.pb(i);
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	sieve();
//	int n;
//	while(cin>>n)
//	{
//	
//		set<int>S;
//		set<int>::iterator it;
//		FOR(i,2,n+1)
//			S.insert(i);
//		
//		vector<pair<int,int> >V;
//
//		FOR(i,0,P.size())
//		{
//			vector<int>E;
//			int x = P[i];int c=0;
//			S.erase(x);
//			for(it=S.begin() ; it!=S.end(); ++it)
//			{
//				int num = *(it);
//				if(num%x==0)
//					E.push_back(num);		
//			}
//			for(it=S.begin() ; it!=S.end(); ++it)
//			{
//				int num = *(it);
//				if(num%x==0)
//					++c;		
//			}
//			FOR(i,2+(c%2==1),n)
//				if(x*i>n)break;
//				else S.erase(x*i);
//		
//		}
//		int c=0;
//			int prev=-1;
//
//	
//			for(it=S.begin() ; it!=S.end(); ++it)
//			{
//				if((*it)%2==0)
//				{
//					++c;
//					if(c==1)
//						prev = *it;
//				}
//				if(c==2)
//					c=0,V.pb(mp(*it,prev));
//			}
//
//		cout << V.size() << endl;
//		FOR(i,0,V.size())
//			cout << V[i].first << " " << V[i].second << endl;
//	
//	cout <<endl;
//	}
//
//
//	return 0;
//}