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

		int mat[1009][1009];
		int arr[1009];

int main()
{
	freopen("input.in", "r" , stdin);

	int n,k,d;
	while(cin>>n>>k>>d)
	{

		LL p=1;
		FOR(i,0,d)
		{
			p *=(LL)k;
			if(p>=n)
				break;
		}
		if(p<n)
		{
			cout << -1 <<endl;
			continue;
		}

		FOR(i,0,d)
			arr[i]=1;
		FOR(i,0,n)
		{
			FOR(j,0,d)
				mat[j][i] = arr[j];
			for(int j=d-1 ; j>=0 ; j--)
				if(arr[j]<k)
				{
					arr[j]++;
					break;
				}
				else arr[j]=1;
		}	
		FOR(i,0,d)
		{
			FOR(j,0,n)
			{
				cout << mat[i][j] << " ";
			}
			cout <<endl;
		}
	}


	return 0;
}