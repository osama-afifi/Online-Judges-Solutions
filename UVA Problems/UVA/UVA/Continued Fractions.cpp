
#include <iostream>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

int num;
int den;
int remainder;
int number;

	while(cin>>num>>den)
	{
		cout<<"["<<num/den<<";";

		while(num%den!=0)
		{
			remainder= num%den;
			num=den;
			den=remainder;
			cout<<num/den;
			if(num%den!=0)
				cout<<",";
		}
		cout<<"]"<<endl;
	}


	return 0;
}