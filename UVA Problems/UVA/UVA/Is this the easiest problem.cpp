#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	long long int t,kase=1; 
	cin>>t;
	while(t>0)
	{

		long long int a,b,c;

		cin>>a>>b>>c;

		if (a>=b+c || b>=b+a || c>=b+a)
		{cout<<"Case "<<kase++<<": "<<"Invalid"<<endl;}

		else if (a==b && b==c && c==a)
		{cout<<"Case "<<kase++<<": "<<"Equilateral"<<endl;}

		else if (a==b || b==c || c==a)
		{cout<<"Case "<<kase++<<": "<<"Isosceles"<<endl;}

		else 
		{cout<<"Case "<<kase++<<": "<<"Scalene"<<endl;}



		t--;}



	return 0;
}
