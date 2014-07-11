#include<iostream>
using namespace std;
int main()
{
	int t,f,a,x,y=2,n=1,z,k=0,m;
	cin>>t;
	cout<<endl;
	
	while (t>0)
{	cin>>f>>a;
	a=a+1;

	while (f>0)
	{ 
		cout<<endl;
		while (y<a)
		{
		for(x=1;(x<y);x++)
		{cout<<n;}
		cout<<endl;
		n++;
		y++;
		}

		n=a-1;
		while (n>0)
		{
		for(z=a-1;(z>k);z--)
		{cout<<n;}
		cout<<endl;
		k++;
		n--;
		}

		y=2,n=1,z,k=0;

		f--;
	}
	t--;
	}

	return 0;
}
//Made by Osama Magdy//