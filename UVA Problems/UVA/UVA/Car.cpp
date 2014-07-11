#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	double u,v,t,a,s;
	int choice,kase=1;
	while(cin>>choice)
	{
	
	if (choice==1)
	{
	cin>>u>>v>>t;
	a=(v-u)/t;
	s=(u*t)+(0.5*a*t*t);

	cout<<"Case "<<kase++<<": "<< setprecision(3) << fixed << s << " " << setprecision(3) << fixed << a << endl;
	}
	
/////////////////////////////////

	if (choice==2)
	{
		
	cin>>u>>v>>a;
	t=(v-u)/a;
	s= ((v*v)-(u*u)) / (2*a);

	cout<<"Case "<<kase++<<": "<< setprecision(3) << fixed << s << " " << setprecision(3) << fixed << t << endl;
	
	}
/////////////////////////////////
	if (choice==3)
	{
		
	cin>>u>>a>>s;
	v= sqrt((u*u)+(2*a*s));
	t=(v-u)/a;

	cout<<"Case "<<kase++<<": "<< setprecision(3) << fixed << v << " " << setprecision(3) << fixed << t << endl;
	
	}
//////////////////////////////////
	if (choice==4)
	{
		
	cin>>v>>a>>s;
	u=sqrt( (v*v)-(2*a*s) );
	t=(v-u)/a;

	cout<<"Case "<<kase++<<": "<< setprecision(3) << fixed << u << " " << setprecision(3) << fixed << t << endl;
	
	}
/////////////////////////////////////////////	
	if (choice==0)break;
	
	
	}
	
	return 0;
}