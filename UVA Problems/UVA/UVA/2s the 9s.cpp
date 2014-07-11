#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("input.in", "r", stdin);

string nstring;
while( cin>>nstring )
{

	if (nstring=="0")break;
	long long Sstring=0;
	for(int i=0; i<(nstring.length()) ;i++)
{Sstring = Sstring + (nstring[i]-'0');
}


	unsigned long long n=Sstring;	


///////////////////////////////
unsigned long long x=n;
	int multiple=0,degree=1;;

	if (x==9)
		{multiple=1;
		goto result;}


		while (true)
		{
			
			unsigned long long S=0;
			while (x!=0)
			{
				S=S+x%10;
				x=x/10;
			}
			
			x=S;
             degree++;

			if (x==9)
			{multiple=1;
			break;}
		
			else if (x<9)
			{multiple=0;
			break;}

		}

result:

	if (multiple==0)
cout<<nstring<<" is not a multiple of 9."<<endl;

	else if (multiple==1)
cout<<nstring<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;


}


 return 0;
}