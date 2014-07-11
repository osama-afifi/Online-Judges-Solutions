#include <iostream>


using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	long int t,e,f,c,bot,soda;
	cin>>t;
	while (t>0)
	{
		//////////////////////////
		cin>>e>>f>>c;

		long int res=0,spare=0;

		bot=e+f;

		while(bot>=c)
		{
			soda=bot/c;

			res=res+soda;

			bot=soda+bot%c;
		}

		cout<<res<<endl;
		//////////////////////////
		t--;
	}
	return 0;
}