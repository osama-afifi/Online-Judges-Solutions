#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("input.in", "r", stdin);
	int k, x , y , z;

	while	(cin>>k>>x>>y>>z)
	{

		if (k==0 && x==0 && y==0 && z==0)break;

		int TOTAL=120;

		int first=k-x;
		if (first<0)
			first=first+40;

		int sec=y-x;
		if (sec<0)
			sec=sec+40;

		int third=y-z;
		if (third<0)
			third=third+40;

		TOTAL= (TOTAL +first+ sec + third)*9;

		cout<<TOTAL<<endl;
	}
	return 0;
}