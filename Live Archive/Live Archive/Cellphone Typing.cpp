//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <cstring>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//#define MAX 100048
//
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//struct node{
//  char c;
//  int words;
//  map<char, node*> M;
//  node(char cc){
//    c = cc;
//    words = 0;
//  }
//};
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n;
//	vector<string>V;
//	while(cin>>n)
//	{
//		V.clear();
//		string s;
//		FOR(i,0,n)
//		{
//			cin>>s;
//			V.push_back(s);
//		}
//		node *start = new node('$');
//		FOR(i,0,n)
//		{
//			node *cur = start;
//			FOR(j,0,V[i].length())
//			{
//				if(cur->M.find(V[i][j])==cur->M.end())
//					cur->M[V[i][j]] = new node(V[i][j]);
//				
//				cur = cur->M[V[i][j]];
//				++cur->words;
//			}
//		}
//		
//		int count,total=0,prev;
//		FOR(i,0,n)	
//		{
//			node *cur = start;
//			count=1;
//			prev=0;
//			FOR(j,0,V[i].length())
//			{
//				cur = cur->M[V[i][j]];
//				if(prev>cur->words)
//					count++;
//				prev = cur->words;
//			}
//			total+=count;
//		}
//		double res = ((double)total/(double)n);
//		cout<<setprecision(2)<<fixed<<res<<endl;
//	}
//	return 0;
//}
