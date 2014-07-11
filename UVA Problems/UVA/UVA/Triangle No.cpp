#include <iostream>
using namespace std;
int main ()
{
int x,n,z;
cout<<"Enter your Desired Triangle Dimension :";
cin>>x;
cout<<endl<<endl<<endl;
n=0;
z=x;

while (n<x)
{
	if (n==0)
		{
			cout<<x<<endl;
	}
	else
{
	z=z+(x*(10^(n)));
	
	cout<<z<<endl;
}
	n++;
}
return 0;
cin.get();
}