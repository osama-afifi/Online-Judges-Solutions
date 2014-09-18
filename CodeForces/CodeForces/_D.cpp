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


int n,k;
vector<int>V[10];

int LIS(vector<int> &b )
{
vector <int> d(n+1);
   d[0]=-(1<<25);
   for(int i=1;i<=n;i++) d[i]= 1<<25;;
   int maxi=0;
   for(int i=0;i<n;i++)
   {
       int j=int(upper_bound(d.begin(),d.end(),b[i])-d.begin());
       if(d[j-1]<b[i] && b[i]<d[j])
            d[j]=b[i];
       if(maxi<j) 
		   maxi=j;
   }
   return maxi;
}

int temp[2009];

int LCS( vector<int>&V1 , vector<int>&V2)
{
	vector<int>arr;
	FOR(i,0,V1.size())
		temp[V1[i]]=i;
	FOR(i,0,V2.size())
		arr.push_back(temp[V2[i]]);
	int ret = LIS(arr);
	return ret;
}

int main()
{
	freopen("input.in", "r" , stdin);


	while(cin>>n>>k)
	{
		FOR(i,0,n)
		{
			V[i].clear();
			V[i].resize(n);
		}
		FOR(i,0,k)
			FOR(j,0,n)
		{
			int num;
			cin>>num;
			V[i][j]=num-1;
		}

		
	int mini = n;
	FOR(i,0,k)
		FOR(j,i+1,k)
			mini= min(mini,LCS(V[i],V[j]));
	cout << mini <<endl;
		
	}



	return 0;
}