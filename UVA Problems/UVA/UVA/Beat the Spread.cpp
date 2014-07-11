
#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{	freopen("input.in", "r", stdin);

	int t,x,y,a,b;
	cin>>t;
	while(t>0)
	{

	cin>>a>>b;
	
	if ((a>=b)&&(((a%2==0)&&(b%2==0))||((b%2==1)&&(a%2==1))))
	{
	x=(a+b)/2;
	y=a-x;
	cout<<x<<" "<<y<<endl;
	}

	else if ((a<0)||(b<0))
		cout<<"impossible"<<endl;
	else
		cout<<"impossible"<<endl;
	
	
	t--;
	}
	
return 0;
}