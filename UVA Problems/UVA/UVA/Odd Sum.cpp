#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{	//freopen("input.in", "r", stdin);

int t,x,y,n=1,sum;
cin>>t;
while (t>0)
{
	cin>>x>>y;
	

		if (x%2==0)
			x++;

		for (sum=0 ; x<=y ; x=x+2 )
			sum=sum+x;
	
	cout<<"Case "<<n++<<": "<<sum<<endl;
	t--;
}

return 0;
}
