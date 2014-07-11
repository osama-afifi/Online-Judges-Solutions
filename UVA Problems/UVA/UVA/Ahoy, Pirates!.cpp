//// Bsm Allah
//// Segment Tree
//#include <iostream>
//#include <map>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <string>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//#define mp make_pair
//
//struct BIT
//{
//	int N;
//	vector<int>tree;
//	BIT(int n)
//	{
//		N=n;
//		tree.resize(N);
//	}
//	int cum(int i)
//	{
//		int sum = 0 ;
//		while(i>0)
//		{
//			sum+=tree[i];
//			i = (i & -i);
//		}
//		return sum;
//	}
//
//	void upd(int i , int val)
//	{
//		while(i<=N)
//		{
//			tree[i]+=val;
//			i+= (i&-i);
//		}
//	}
//
//};
//
//vector<int>V;
//BIT bit;
//
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		V.clear();
//		int n;
//		vector<int>V;		
//		FOR(i,0,n)
//		{
//			int k,num;
//			string s;
//			cin>>k;
//			cin>>s;
//			while(k--)
//				FOR(j,0,s.length())
//				V.push_back(s[j]-'0');
//
//		}
//		bit = BIT(V.size()+1);
//		FOR(i,0,V.size())
//			bit.upd(i+1,V[i]);
//		int q;
//		char c;
//		int a,b;
//		cin>>q;
//		while(q--)
//		{
//			cin>>c>>a>>b;
//			if(c=='F')
//			{}
//			if(c=='E')
//			{}
//			if(c=='I')
//				bit.upd(a,1),bit.upd(b,-1);
//			if(c=='S')
//			{}
//
//		}
//
//	}
//	return 0;
//}