
#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{	freopen("input.in", "r", stdin);

int n,k,res;

while (cin>>n>>k)
{
	res=n + (n-1)/(k-1);
	cout<<res<<endl;
}

return 0;
}
