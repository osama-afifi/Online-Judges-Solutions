#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	label:
	cout<<"Enter Your 1st Integer: ";
	cin>>a;
	cout<<endl;

	cout<<"Enter Your 2nd Integer: ";
	cin>>b;
	cout<<endl;

	cout<<"Enter Your 3rd Integer: ";
	cin>>c;
	cout<<endl;
	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	if (a>b)
	{
		if (a>c)
		cout<<"The 1st Integer is the Biggest Integer";
		else
        cout<<"The 3nd Integer is the Biggest Integer";
	}
	else if (a<b)
    {
		if (b>c)
		cout<<"The 2nd Integer is the Biggest Integer";
		else
        cout<<"The 3nd Integer is the Biggest Integer";
	}
	else
	{
		cout<<"You Entered Two or more Integers of SAME value Please Renter yout Integers !!";
		
	cout<<endl<<endl<<endl<<endl<<endl<<endl;
		goto label;
	}
	return 0;
	cin.get();
	/*
	By Osama Magdy
	Section:2
	*/
}