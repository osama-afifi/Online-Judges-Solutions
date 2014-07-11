////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

////////////////////////////////////////////////

int main ()
{ 
	int n;
	while(cin>>n &&n!=0)
	{

	long long int f[100],x[100];
	x[0]=0;

	for(int i=1;i<51;i++)
	{
	f[i]=i;
	}

	for(int i=1;i<51;i++)
	{
	f[i+2]=f[i]+f[i+1];
	}

	
	//for(int i=1;i<51;i++)
	//{
	//cout<<f[i]<<"  ";
	//}

	
	cout<<f[n]<<endl;
	}
return 0;
}
