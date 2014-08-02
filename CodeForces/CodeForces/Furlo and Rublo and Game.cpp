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
int oo=1<<25;

LL grundy(LL x) {

	if(x<4)
		return 0;
	set<LL> moves;
	LL L = floor(sqrt(x));
	LL R = ceil(sqrt(sqrt(x)));
	LL g1 = grundy(L);
	LL g2 = grundy(R);
	moves.insert(g1);
	moves.insert(g2);
	LL g= 0;
	while (moves.find(g)!=moves.end()) g++;
	return g;
}

int main()
{
	freopen("input.in", "r" , stdin);

	int n;
	while(cin>>n)
	{
		LL res=0;
		FOR(i,0,n)
		{
			LL num;
			cin>>num;
			res ^= grundy(sqrt(num));
		}

		if(res)
			cout<< "Furlo\n";
		else
			cout << "Rublo\n";
	}

	return 0;
}