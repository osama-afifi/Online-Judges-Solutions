#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool PRIME(long long x)
{
	int i;
	for(i=x-1;i>1;i--)
		if(x%i==0)break;

	if(i==1)
		return true;

	else
		return false;

}


int main ()
{
	freopen("input.in", "r", stdin);

	string text;

	while(getline(cin,text))
	{


		long long sum=0;


		for(long long  i=0;i<text.length();i++)
		{

			if (text[i]>='A' && text[i]<='Z')
				sum=sum+(text[i]-64+26);

			else if (text[i]>='a' && text[i]<='z')
				sum=sum+(text[i]-96);

		}

		if(PRIME(sum)==true || sum==1)
			cout<<"It is a prime word."<<endl;

		else
			cout<<"It is not a prime word."<<endl;


	}

	return 0;
}
