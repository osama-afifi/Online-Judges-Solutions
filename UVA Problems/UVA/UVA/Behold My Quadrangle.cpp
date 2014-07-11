#include <iostream>
using namespace std;
int main()
{
	freopen("input.in", "r", stdin);

int t,a,b,c,d;
cin>> t;
while ( t > 0 )
{
	cin>>a>>b>>c>>d;
	
		if ( a==b && b==c && c==d )

			cout<<"square"<<endl;

		else if (a==b && c==d || a==d && b==c || a==c && b==d)

			cout<<"rectangle"<<endl;

		else if ( a>b+c+d || b>a+c+d || c>a+b+d || d>a+b+c )
			cout<<"banana"<<endl;

		else 
			cout<<"quadrangle"<<endl;

	t--;
}
return 0;
}