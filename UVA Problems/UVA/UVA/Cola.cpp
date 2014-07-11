#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{	freopen("input.in", "r", stdin);

int n;

while(cin>>n)
{


	int res=n,x;

	while (n>=3)
	{
		x=n/3;

		res=res+x;
		n=x+n%3;


		


	}

	if (n==2)
			res++;

	cout<<res<<endl;
}

cin.get();
return 0;
}
