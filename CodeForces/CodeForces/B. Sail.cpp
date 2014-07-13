//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//
//
//int t;
//
//
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//
//
//int man(pair<int,int>p1 , pair<int,int>p2)
//{
//	return abs(p1.first-p2.first)+abs(p1.second-p2.second);
//}
//
//
//int mx[] = {1 , 0 , -1 , 0 };
//int my[] = {0 , -1 , 0 , 1};
//int oo = 1<<25;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	pair<int,int>s;
//	pair<int,int>e;
//	map<char,int>M;
//	int k=0;
//	M['E']=k++;
//	M['S']=k++;
//	M['W']=k++;
//	M['N']=k++;
//	cin>>t>>s.first>>s.second>>e.first>>e.second;
//	string text;
//	cin>>text;
//
//	pair<int,int>ne;
//	pair<int,int>cur;
//	cur=s;
//	int dist=oo;
//	int used=0;
//	int i;
//	for( i = 0 ; i<t ; i++)
//	{
//		int dir = M[text[i]];
//		ne = make_pair(cur.first+mx[dir],cur.second+my[dir]);
//		if(man(ne,e)<man(cur,e))
//			used++,cur=ne;
//		if(man(ne,e)==0)
//			break;
//	}
//	if(man(ne,e)==0)
//	cout<<i+1<<endl;
//	else cout<<-1<<endl;
//
//
//	return 0;
//}