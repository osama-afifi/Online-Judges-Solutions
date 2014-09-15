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

int main()
{
	freopen("input.in", "r" , stdin);

	int n,m,a,b;
	while(cin>>n>>m>>a>>b)
	{
		int mini=1<<25;
		for(int i = 0 ; i<=n ; i++)
		{
			if(i*m<=n)
			{
				mini = min(mini, b*i+a*(n-i*m));
			}
		
		}
		cout << mini <<endl;
	
	}



	return 0;
}