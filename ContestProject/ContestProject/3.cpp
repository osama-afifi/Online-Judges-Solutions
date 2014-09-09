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

LL h[4009][4009];
char arr[4009][1009];

LL M = 1000*1000*1000 + 7;
LL B = 31;

int kase=0;

int main()
{
	freopen("input.in", "r" , stdin);
	int n;
	while(scanf("%d",&n)==1)
	{
		if(!n)break;
		Set(arr,0);
		FOR(i,0,n)
			scanf("%s",&arr[i]);
		FOR(i,0,n)
		{
			LL p=B;
			h[i][0]=arr[i][0];
			for(int j=0 ; arr[i][j] ; j++)
			{
				h[i][j] = h[i][j-1] + p*arr[i][j];
				p = p * B;
				h[i][j]%=M;
				p%=M;
			}
		}


		LL res=0;
		FOR(i,0,n)
			FOR(j,i+1,n)
		{
			int b=0,e = 1000;
			int ret = -1;
			while(b<=e)
			{
				int mid = (b+e)/2;
				if(h[i][mid]!=0 && h[i][mid]==h[j][mid])
					b= mid+1, ret = mid;
				else e = mid-1;
			}
			res += (1 + (ret+1)*2);
		}
		printf("Case %d: %d\n",++kase,res);
	//	cout << "Case " << ++kase <<": "<< res << endl;
	}

	return 0;
}