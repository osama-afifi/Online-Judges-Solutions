# include <iostream>

using namespace std;

int main ()

{
		int y,x,z;

		cin>>x;
		z=0;
	while (z<=x)
	{
		
		y=0;
		while (y<z)
		{
			cout<<"*";
			y++;
		}
    cout<<endl;
	z++;
	}
	return 0;
	cin.get();
}