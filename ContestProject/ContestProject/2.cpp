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


int Y1[10009];
int Y2[10009];
int main()
{
	freopen("input.in", "r" , stdin);

	char dum1,dum2;
	int y,m,d;

	Y1[0]=1;
	Y2[0]=1;
	FOR(i,1,10001)
	{
		if(i%400==0)
			Y1[i]=Y1[i-1]+1;
		else if(i%100==0)
			Y1[i]=Y1[i-1];
		else if(i%4==0)
			Y1[i]=Y1[i-1]+1;
		else
			Y1[i]=Y1[i-1];

		if(i%4==0)
			Y2[i]=Y2[i-1]+1;
		else
			Y2[i]=Y2[i-1];
	}

	while(cin>>y>>dum1>>m>>dum2>>d)
	{
		int gdays=Y1[y];
		int jdays=Y2[y];
		//	jdays += 1+ y/4;
		//	gdays += y/4 - y/100 + y/400;

		bool l= 0;

		if(y%400==0)
			l=1;
		else if(y%100==0)
		{}
		else if(y%4==0)
			l=1;

		if( l && (m<2 || (m==2 && d<29)))
			gdays--;
		if(y%4==0 && (m<2 || (m==2 && d<29)))
			jdays--;

		int res =  jdays - gdays;
		//cout << gdays - jdays <<endl;

		// convert

		int M[] = { 0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};
		int resy=y,resm=m,resd=d;

		while(res-->0)
		{
			l= 0;

			if(resy%400==0)
				l=1;
			else if(resy%100==0)
			{}
			else if(resy%4==0)
				l=1;

			if(resd==M[resm]+(resm==2 && l))
			{
				resd=1;
				resm++;
				if(resm==13)
					resm=1,resy++,resd=1;
			}
			else resd++;
		}

		if(resy<10)
			cout << 0;
		cout << resy;

		cout << "-";
		if(resm<10)
			cout << 0;
		cout << resm;

		cout << "-";
		if(resd<10)
			cout << 0;
		cout << resd;
		cout <<endl;




	}


	return 0;
}