#include <iostream>


using namespace std;
int main ()
{
	int x,j=5;
	char answer;
	while(true)
	{
	
	cout<<"Enter a number: ";
	cin>>x;
	cout<<endl;
	for(int i=1;i<=100;i++,j--)
	{cout<<x*i<<"		 ";
		if (j==0)
		{j=5;
		cout<<endl;}
	}
	cout<<endl<<"......."<<endl<<"....."<<endl<<endl;

	cout<<"Do another ?(Y/N): ";
	cin>>answer;
	if (answer=='y' || answer=='Y')continue;
	else if (answer=='n' || answer=='N')break;
	}



/////////<<<<<<<<...........OSAMA MAGDY SECTION:2 ...>>>>>>>////////////
return 0;
}
