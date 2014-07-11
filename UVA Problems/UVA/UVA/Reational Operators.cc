//=====================================================================================
#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{
		freopen("input.in", "r", stdin);
	int t,x,y;
	cin>>t;
	while((cin>>x>>y) && (t>0))
	{
		
	if (x>y)
		cout<<">"<<endl;
	else if (y>x)
		cout<<"<"<<endl;
	else
		cout<<"="<<endl;
	
	t--;
	}
return 0;
}