#include <iostream>


using namespace std;
int main ()
{
	int x,y,i,j,k,z;
	cin>>x;
	
	///////////////////////////UPPER HALF///////////////////////////////
	k=1;
	for (y=x/2;(y>=0);y--,k=k+2)
	{
		for (i=0;i<y;i++)
			cout<<" ";
		for (j=0;(j<k);j++)
			cout<<"*";
		cout<<endl;
	}
	//////////////////////////LOWER HALF////////////////////////////////
	k=x-2;
	z=1;
	for (y=x/2;(y>=0);y--,k=k-2,z++)
	{
		for (i=0;(i<z);i++)
			cout<<" ";
		for (j=0;(j<k);j++)
			cout<<"*";
		cout<<endl;
	}
	
/////////<<<<<<<<...........OSAMA MAGDY SECTION:2 ...>>>>>>>////////////
return 0;
}
