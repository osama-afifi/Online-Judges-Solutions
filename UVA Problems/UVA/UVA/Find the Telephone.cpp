
#include <iostream>
#include <string>
#include <iomanip>
#include<stdio.h>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);


		string text;
		

		 while(cin>>text)
		 {
		 string number = text;

			
		 for(int i=0; i<text.length() ;i++)
		 {

			 if(text[i]=='A' || text[i]=='B' || text[i]=='C')
				 number[i]='2';

			 else if(text[i]=='D' || text[i]=='E' || text[i]=='F')
				 number[i]='3';

			 else  if(text[i]=='G' || text[i]=='H' || text[i]=='I')
				 number[i]='4';

			 else  if(text[i]=='J' || text[i]=='K' || text[i]=='L')
				 number[i]='5';

			 else  if(text[i]=='M' || text[i]=='N' || text[i]=='O')
				 number[i]='6';
			 	 
			 else  if(text[i]=='P' || text[i]=='Q' || text[i]=='R' || text[i]=='S')
				 number[i]='7';
				 
			 else  if(text[i]=='T' || text[i]=='U' || text[i]=='V' )
				 number[i]='8';
				 
			 else  if(text[i]=='W' || text[i]=='X' || text[i]=='Y'  || text[i]=='Z')
				 number[i]='9';

		 }

		 cout<<number<<endl;

		 }
	return 0;
}
