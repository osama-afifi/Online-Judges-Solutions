


#include <functional> 
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define mp(a,b) make_pair(a,b)
#define all(v) v.begin() ,v.end()
#define pb(c) push_back(c)

typedef long long LL;

using namespace std;


int arr[5009];

int main() 
{
	freopen("input.in","r",stdin);

	int n,m;

	while(cin>>n)
	{
		cin>>m;
		priority_queue< pair<int,int> >Q;
		map<int,int>M;
		M.clear();
		FOR(i,0,n)
		{
			cin>>arr[i];
			M[arr[i]]++;	
		}
		for(map<int,int>::iterator it  = M.begin() ; it!=M.end() ; it++)
			Q.push(mp (it->second , it->first) ) ;
		if(M.size()==1)
		{
			for(map<int,int>::iterator it  = M.begin() ; it!=M.end() ; it++)
			{
				int col  = it->first;
				int f  = it->second;
				int cc=0;
				cout<<0<<endl;
				FOR(j,0,n)		
					cout<< col << " " << col <<endl; ;
				
			}
			continue;
		}
		int cc= 0;
		vector<pair<int,int > >V;

		while(!Q.empty())
		{
			pair<int,int> a = Q.top();
			Q.pop();
			pair<int,int> b = Q.top();
			Q.pop();
			
			if(a.first<=0 && b.first<=0)break;
			if(V.size()==n)break;
			if(b.first<=0)
			{
				FOR(j,0,a.first)
					FOR(k,j+1,a.first)
				{
					if(V.size()==n)break;
					V.pb(mp(a.second ,a.second ));
					if(V.size()==n)break;
					V.pb(mp(a.second ,a.second ));
					if(V.size()==n)break;
					//	cout<< a.second << " " << a.second ;
				}
				break;
			}
			else
			{
				if(V.size()==n)break;
				cc++;
				a.first--;
				b.first--;
				V.pb(mp(a.second ,b.second ));
				V.pb(mp(b.second ,a.second ));
				Q.push(a);
				Q.push(b);
				//	cout<< a.second << " " << b.second ;
			}
			if(cc==n)break;

			
		}
		cout<< V.size() <<endl;
		FOR(i,0,n)
			cout<< V[i].first << " " <<V[i].second <<endl;;
	}
	return 0;

}