#include <iostream>

////////////The correct answer
using namespace std;
int main ()
{

	long long int n;
	while(cin>>n)
	{
		long long fact=1;

		if (n>13)
		{cout<<"Overflow!"<<endl;
		continue;}

		for(int i=1; i<=n ;i++)
				fact=fact*i;
		

		if (n>7 && n<=13)
			cout<<fact<<endl;

		else if(n>=0 && n<=7)
			cout<<"Underflow!"<<endl;

		else if(-n % 2 == 0)
			cout<<"Underflow!"<<endl;
		else
			cout<<"Overflow!"<<endl;






	}

	return 0;
}