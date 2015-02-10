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



#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;

class TheKingsTree
{
public:

	vector< vector<int>  >G;
	vector< int >C;
	vector< int >D;


	LL dfs(int cur, int dep)
	{
		D[cur] = dep;
		if(G[cur].size()==0)
			return C[cur] = 1;
		LL sum=0;
		FOR(i,0,G[cur].size())
			sum += dfs(G[cur][i],dep+1);
		return C[cur] = sum+1;
	}


	LL dfsodd(int cur)
	{
		int sum=0;
		FOR(i,0,G[cur].size())
		{
			sum += (D[G[cur][i]]%2);
			sum += dfsodd(G[cur][i]);
		}
		return sum;
	}

	LL dfseven(int cur)
	{
		int sum=0;
		FOR(i,0,G[cur].size())
		{
			sum += (D[G[cur][i]]%2==0);
			sum += dfseven(G[cur][i]);
		}
		return sum;
	}

	int getNumber(vector <int> parent)
	{
		G.resize(parent.size()+1);
		C.resize(parent.size()+1);
		D.resize(parent.size()+1);
		FOR(i,0,parent.size())
			G[parent[i]].push_back(i+1);
		dfs(0,0);
		LL s1 = 0, s2 = 0;
		FOR(i,0,parent.size()+1)
			s1 += dfsodd(i)+1;	
		FOR(i,0,parent.size()+1)
			s2 += dfseven(i)+1;
		return min(s1,s2);
	}


};


int main()
{

	TheKingsTree K;

	int arr[] = {0, 1, 2, 3, 1};
	LL res = K.getNumber(vector<int>(arr,arr+(sizeof(arr)/sizeof(int))));
	cout << res <<endl;

	return 0;
}