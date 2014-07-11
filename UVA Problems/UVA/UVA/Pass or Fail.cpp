#include <iostream>
using namespace std;
int main()

{
	float p,m,i,avg;

label:

	cout<<"Enter you Mark in Physics: ";
	cin>>p;
	if ((p<=100) && (p>=0));
	else
	{
	cout<<"Enter a Valid Mark !!!\n";
	goto label;
	}

	cout<<"Enter you Mark in Maths: ";
	cin>>m;
	if ((m<=100) && (m>=0));
	else
	{
	cout<<"Enter a Valid Mark !!!\n";
	goto label;
	}

	cout<<"Enter you Mark in Intro: ";
	cin>>i;
	if ((p<=100) && (p>=0));
	else
	{
	cout<<"Enter a Valid Mark !!!\n";
	goto label;
	}


	avg=(float(p+m+i)/3);
	if ((p>=40)&&(m>=40)&&(i>=40))
		cout<<"You Have Passed !!!";

	else if ((p<=40)&&(m>=40)&&(i>=40)&&(avg>=50))
					cout<<"You Have Passed !!!\a\n";

	else if ((p>=40)&&(m<=40)&&(i>=40)&&(avg>=50))
				cout<<"You Have Passed !!!\a\n";

	else if ((p>=40)&&(m>=40)&&(i<=40)&&(avg>=50))
				cout<<"You Have Passed !!!\a\n";
			else
			cout<<"You Have Failed !!!\a\n";

	return 0;
	cin.get();
	
	/*
	By Osama Magdy
	Section:2
	*/
}