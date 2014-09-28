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


LL acc[1000009];

int main()
{
	freopen("input.in", "r" , stdin);


	LL n;
	while(cin>>n)
	{
		LL c=0;
		LL x = sqrt(n)+1;
		LL sum=0;
		FOR(i,1,1000000)
		{
			sum += 3*i-1;
			if(sum>n)break;
			if((n-sum)%3==0)
				c++;
		}
		cout << c <<endl;
	}

	return 0;
}