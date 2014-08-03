#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) (A.begin(), A.end())
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;


LL grundy(LL x) {

	if(x<4)
		return 0;
	set<LL> moves;
	LL L = ceil(sqrt(sqrt(x)));
	LL R = floor(sqrt(x));
	LL g1 = grundy(L);
	LL g2 = grundy(R);
	moves.insert(g1);
	moves.insert(g2);
	moves.insert(grundy((L+(R-L)/2)));
	LL g= 0;
	while (moves.find(g)!=moves.end()) g++;
	return g;
}


LL brute(LL x) {

	if(x<4)
		return 0;
	set<LL> moves;
	LL L = ceil(powl((long double)x, 0.25));
	LL R = floor(powl((long double)x, 0.5));
	for(LL i =L ; i<=R ; i++)
		moves.insert(brute(i));
	LL g= 0;
	while (moves.find(g)!=moves.end()) g++;
	return g;
}

int main()
{
	freopen("input.in", "r" , stdin);
		
		FOR(i,0,10000)
			if(brute(i)!=grundy(i))
			{
			cout<< i<< " " << brute(i) << " " << grundy(i)<<endl;
			//break;
			}
	int n;
	while(cin>>n)
	{

		LL res=0;
		FOR(i,0,n)
		{
			LL num;
			cin>>num;
			res ^= grundy(num);
		}

		if(res)
			cout<< "Furlo\n";
		else
			cout << "Rublo\n";
	}

	return 0;
}