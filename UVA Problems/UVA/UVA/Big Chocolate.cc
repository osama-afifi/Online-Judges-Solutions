//=====================================================================================
#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{
	freopen("input.in", "r", stdin);
	
	int m,n;
	while (cin>>m>>n && (m>0) && (n>0) )
	{	
		cout<<(m-1)+(m*(n-1))<<endl;

	}
	
return 0;
}