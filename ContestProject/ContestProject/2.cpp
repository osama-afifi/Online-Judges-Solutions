//Subway tree systems

#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<sstream>
#include<queue>
#include<set>
#include<stack>
#include<math.h>


#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;


bool f=0;
int g=0;
int idx=0;
void dfs(int cur, int &idx, string &s, vector<vector<int> >&V)
{
	if(f)
		return;
	if(idx==s.size())
	{f=1;return;}
	if(s[idx]=='1')
		return;
	V[cur].push_back(++g);
	dfs(g,idx++,s,V);
	 
}



void solve(int cur, vector<vector<int> > &V, string &t)
{
	FOR(i,0,V[cur].size())
	{
			t+="0";
			solve(V[cur][i],V,t);
	}
	t+="1";
}

int main()
{
	freopen("input.in", "r" , stdin);

	int t;
	cin>>t;
	while(t--)
	{

		string s1,s2;
		string t1,t2;
		cin>>s1>>s2;
		t1="";
		t2="";
		vector< vector<int > > V1;
		vector< vector<int > > V2;
		V1.clear();V2.clear();
		V1.resize(s1.size());
		V2.resize(s2.size());
		f=0;
		g=0;
		dfs(0,0,s1,V1);
		f=0;
		g=0;
		dfs(0,0,s2,V2);
		
		FOR(i,0,s1.size())
			sort(V1[i].begin(),V1[i].end());
		
		FOR(i,0,s2.size())
			sort(V2[i].begin(),V2[i].end());

		solve(0,V1,t1);
		solve(0,V2,t2);

		if(V1==V2)
			cout << "same" <<endl;
		else
			cout << "different" <<endl;


		
	}


	return 0;
}