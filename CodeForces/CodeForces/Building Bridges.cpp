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

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
#define eps 1e-9
typedef long long LL;
using namespace std;

const LL oo = 1LL<<25;

int A[100009];
int B[100009];
int I[100009];


__inline double euc(double x1,double y1,double x2,double y2)
{
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
int n,m;

int ternary(int v)
{
	int b=0,e=n-1;
	int mini=1<<25,ret=b;
	while(e-b>3)
	{
		int p1= b+(e-b)/3;
		int p2= e-(e-b)/3;
		if(abs(v-A[p1])>abs(v-A[p1]))
			b=p1;
		else b=p2;
	}
	ret=b;
	FOR(i,b,e+1)
	{
		if(abs(v-A[ret])>abs(v-A[i]))
			ret=i;
	}

	return ret;
}

int main()
{
	freopen("input.in", "r" , stdin);
	int a,b;
	while(cin>>n>>m)
	{
		cin>>a>>b;

		FOR(i,0,n)
			cin>>A[i];

		FOR(i,0,m)
			cin>>B[i];

		FOR(i,0,m)
			cin>>I[i];

		double mini =1e9;
		pair<int,int>res;
		/*FOR(i,0,m)
		FOR(j,0,n)
		{
		double d1=euc(0,0,a,A[j]);
		double d2=euc(a,A[j],b,B[i]);
		double d=d1+d2+I[i];
		if(d<mini)
		mini=d, res=mp(j,i);


		}*/
		FOR(i,0,m)
		{
			// a * (B[i]/b)
			double inter_y =  ((double)a*((double)B[i]/(double)b));

			int idx = ternary(floor(inter_y));//(lower_bound(A,A+n,(int)floor(inter_y))-A);
			double d1=euc(0,0,a,A[idx]);
			double d2=euc(a,A[idx],b,B[i]);
			double d=d1+d2+I[i];
			if(d<mini)
				mini=d, res=mp(idx,i);


			idx = ternary(ceil(inter_y));//idx = (upper_bound(A,A+n,(int)floor(inter_y))-A);
			double d1=euc(0,0,a,A[idx]);
			double d2=euc(a,A[idx],b,B[i]);
			double d=d1+d2+I[i];
			if(d<mini)
				mini=d, res=mp(idx,i);
		}

		cout << res.first+1 << " " <<res.second+1 <<endl; 

	}

	return 0;
}