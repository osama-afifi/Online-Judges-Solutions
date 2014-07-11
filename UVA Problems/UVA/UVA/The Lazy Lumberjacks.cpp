#include <iostream>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

	int N;
	while(cin>>N)
	{
		int x,y,z;
		for(int i=0 ; i <N ; i++)
		{
			cin>>x>>y>>z;
			if( x<=0 || y<=0 || z<=0 || (x+y<=z) ||  (x+z<=y) ||  (y+z<=x) )
				cout<<"Wrong!!"<<endl;
			else 
			cout<<"OK"<<endl;
		}	
	}

	return 0;
}