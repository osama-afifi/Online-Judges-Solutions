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

class TheKingsFactorization
{
public:


	vector<long long> getVector(long long N, vector<long long> primes)
	{
		sort(primes.begin(),primes.end());
		int x = (int)(unique(primes.begin(),primes.end())-primes.begin());
		vector<LL>res;
		FOR(i,0,x)
			while(N%primes[i]==0)
			{
				N /=primes[i]; 
				res.push_back(primes[i]);
			}
		if(N==1)
			return res;
		for(LL i = 2 ; i*i < N ; i++)
			while(N%i==0)
				res.push_back(i), N/=i;
		if(N>1)
			res.push_back(N);
		sort(res.begin(),res.end());
		return res;
	}


};
