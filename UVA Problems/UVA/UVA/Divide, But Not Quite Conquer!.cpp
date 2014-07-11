#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;


int main ()
{
	freopen("input.in","r",stdin);
	int x,y;
	while(cin>>x>>y)
	{
		long long arr[1000];
		bool first=true;
		int z=0;
		arr[0]=x;
		bool boring=false;
		while(arr[z]!=1)
		{
			if(y==1 || y>x || y==0 || x==0)
			{
				boring=true;
				break;
			}
			if(arr[z]%y==0)
				arr[z+1]=arr[z]/y;
			else
			{
				boring=true;
				break;
			}

			z++;
		}

		if(!boring &&(y!=1 && x>=y && y!=0 && x!=0) )
		{
			for(int i=0 ;i<=z;i++)
			{
				if(first==false && z!=0)
					cout<<" ";
				first=false;
				cout<<arr[i];
			}
			cout<<endl;
		}
		else
		{
			cout<<"Boring!"<<endl;
		}
	}
	return 0;
}