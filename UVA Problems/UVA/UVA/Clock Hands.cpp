#include <iostream>
#include<iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	double H,M,t,anglem,angleh,angleres;
	char fasel;
	while(cin>>H>>fasel>>M )
	{
		if (H==0 && M==0)break;

		
		
		angleh=((H*60)+M)/2;
		anglem=M*6;

		angleres=angleh-anglem;

			if (angleres<0)
				angleres=-angleres;

			if (angleres>180)
				angleres=360-angleres;

		cout << setprecision(3) << fixed << angleres << endl;
	}



	return 0;
}