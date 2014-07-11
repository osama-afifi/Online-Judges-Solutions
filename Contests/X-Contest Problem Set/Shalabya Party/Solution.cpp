#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cmath>
#include <numeric>
#include <fstream>
using namespace std;
#define pb push_back
#define all(v) v.begin(),v.end()
#define sz size()
#define ll long long
#define MOD 1000000007
class Contest
{
public:
	static ll SUM(ll n1,ll n2)
	{return ((n1%MOD) + (n2%MOD))%MOD;}
	static ll MUL(ll n1,ll n2)
	{return ((n1%MOD) * (n2%MOD))%MOD;}
	static ll sumToLessThan10(ll n)
	{
		n%=9;
		return n==0?9:n;
	}
	static ll _6_squares(ll N)
	{return MUL(MUL(N,N+1),2*N+1);}
	static ll _2_linear(ll N)
	{return MUL(N,N+1);}
	static ll summationOfSquares_Linear(ll N)
	{return SUM(_6_squares(N),_2_linear(N));}
	static ll problem(vector<ll>v)
	{
		ll P = 1;
		ll N = (ll)v.size();
		for(ll i = 0 ; i < N; i ++)
			P = MUL(P,v[i]);
		ll M = MUL(MUL(P,sumToLessThan10(P)),N);
		return summationOfSquares_Linear(M);
	}
};
void run()
{
	ifstream input("C:\\Users\\Sharaf\\Desktop\\I.txt");
	ofstream output("C:\\Users\\Sharaf\\Desktop\\O.txt");
	ll n;
	while(input>>n)
	{
		vector<ll>v(n);
		for(ll i = 0; i < n; i ++)
			input>>v[i];
		output<<Contest::problem(v)<<endl;
	}
}
void generate()
{
	ofstream input("C:\\Users\\Sharaf\\Desktop\\I.txt");
	int n;
	for(int i = 0; i < 100; i ++)
	{
		n = rand()%50;
		input<<n<<" ";
		for(int j = 0; j < n; j ++)
			input<<" "<<rand()%10000;
		input<<endl;
	}
}
int main()
{
	run();
}