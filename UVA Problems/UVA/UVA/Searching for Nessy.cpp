#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int t;
	cin>>t;
	while (t>0)
	{
//////////////////////////////////////
long int n,m,i,x,y,occ=0,z;
cin>>n>>m;
x=n-2,y=m-2;

for (i=0;occ<x;i++)
{occ=occ+3;}

if (y%3==0)
	z=y/3;

else if (y%3!=0)
	z=(y/3)+1;

i=z*i;

cout<<i<<endl;
//////////////////////////////////////
		t--;
	}
	return 0;
}
