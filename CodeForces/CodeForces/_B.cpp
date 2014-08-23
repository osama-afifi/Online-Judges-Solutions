
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


#define FOR(i, a, b) for( LL i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;

LL dig(LL n)
{

	LL s=0;
	while(n>0)
	{
		s += (n%10);
		n/=10;
	}
	return s;
}

int main()
{
	freopen("input.in", "r" , stdin);
	LL a,b,c;
	while(cin>>a>>b>>c)
	{

		set<LL>S;
		FOR(i,0,82)
		{
			LL x =(b*powl(i,(double)a))+c;
			if(x>0 && (x<1000000000) && i==dig(x))
				S.insert( b*powl(i,a) +c);
		}

		if(S.size())
		{
			cout << S.size() <<endl;

			for(set<LL>::iterator it = S.begin() ; it!=S.end() ; it++)
			{
				
				cout << *it << " ";
			}
			cout <<endl;
		}
		else 
			cout << 0 << endl;

	}
	return 0;
}