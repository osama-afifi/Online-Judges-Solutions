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

class TheKingsArmyDiv2
{
public:
	int n,m;
	bool inside(int i, int j)
	{
		return !( i<0 || j<0 || i>=n || j>=m);
	}

	int getNumber(vector <string> state)
	{
		n = state.size();
		m = state[0].size();
		int mx[] = {1,-1,0,0};
		int my[] = {0,0,-1,1};
		bool found = 0;
		FOR(i,0,n)
			FOR(j,0,m)
		{
			if(state[i][j] == 'H')found = true;
			FOR(k,0,4)
				if(inside(i+mx[k],j+my[k]) && state[i][j] == 'H' && state[i+mx[k]][j+my[k]] == 'H')
					return 0;
					
		}
		if(found) 
		{
			if(n==1 && m==1)
				return 0;
			return 1;
		}
		return 2;
	}

};