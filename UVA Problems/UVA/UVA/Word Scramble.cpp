
#include <iostream>
#include <string>
#include <iomanip>
#include<stdio.h>

using namespace std;

string PALINDROME (string text_p)
{

	string palind;
	palind=text_p;
	for(  int i=(text_p.length()-1),j=0   ;  i>=0  ;    i--,j++)
	{
		palind[j]=text_p[i];
	}

	return palind;

}


int main ()
{

	freopen("input.in", "r", stdin);


	string text;
	string palin;

	while(getline(cin,text))
	{
		
	

		

 	for( int i=0 ; i<text.length() ; i++ )
	{
		if (text[i]!=' ')
			palin.append(1,text[i]);  

		 if ( (text[i]==' ') || (i==text.length()-1) )
		{
			cout<<PALINDROME(palin);

			if(i!=text.length()-1)
				cout<<" ";

			palin.clear();
		}

		 else if ( (i==text.length()-1) && (text[text.length()-1]) )
			 cout<<" ";
	}

			cout<<endl;
	}
	return 0;
}
