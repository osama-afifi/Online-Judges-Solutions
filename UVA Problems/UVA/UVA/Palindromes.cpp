#include <iostream>
#include <string>

using namespace std;

string PALINDROME(string text_p)
{

	string palin;
	palin=text_p;
	for(  int i=(text_p.length()-1),j=0   ;  i>=0  ;    i--,j++)
	{
	palin[j]=text_p[i];
	}

	return palin;
}

string REVERSE(string text_r)
{

	string rev;
	rev=text_r;

	for(int i=0 ; i<rev.length() ; i++ )
	{
	
		
		//////
		if (rev[i]=='E')
          rev[i]='3';

		else if (rev[i]=='3')
          rev[i]='E';

		else if (rev[i]=='J')
          rev[i]='L';

		else if (rev[i]=='L')
          rev[i]='J';

		else if (rev[i]=='S')
          rev[i]='2';

		else if (rev[i]=='2')
          rev[i]='S';

		else if (rev[i]=='5')
          rev[i]='Z';

		else if (rev[i]=='Z')
          rev[i]='5';

	
		//////////////////

		
		else if (rev[i]=='A')
          rev[i]='A';

		
		else if (rev[i]=='H')
          rev[i]='H';

		
		else if (rev[i]=='I')
          rev[i]='I';

		
		else if (rev[i]=='M')
          rev[i]='M';

		
		else if (rev[i]=='O')
          rev[i]='O';

		
		else if (rev[i]=='T')
          rev[i]='T';

		
		else if (rev[i]=='U')
          rev[i]='U';

		
		else if (rev[i]=='V')
          rev[i]='V';

		
		else if (rev[i]=='W')
          rev[i]='W';

		
		else if (rev[i]=='X')
          rev[i]='X';

		
		else if (rev[i]=='Y')
          rev[i]='Y';

		
		else if (rev[i]=='1')
          rev[i]='1';

		
		else if (rev[i]=='8')
          rev[i]='8';

		else
			 rev[i]='$';

	}

	return rev;
}



int main()
{

	freopen("input.in", "r", stdin);

string text;




while(cin>>text)
{


	string palin = PALINDROME(text);	//Palindrome of text
	
	string reverse = REVERSE(text);	//Reverse the Charachters

	string reverse_palin = PALINDROME(reverse); //Palin the Reverse


	int mirror=0, palindrome=0;
/////////////////////////////////	

	if (text==reverse_palin)
		mirror=1;

	if (text==palin)
		palindrome=1;

////////////////////////////////////

	if (mirror==1 && palindrome==1)
		cout<<text<<" -- is a mirrored palindrome."<<endl<<endl;

	else if (mirror==1 && palindrome==0)
		cout<<text<<" -- is a mirrored string."<<endl<<endl;

	else if (palindrome==1 && mirror==0)
		cout<<text<<" -- is a regular palindrome."<<endl<<endl;

	else if (palindrome==0 && mirror==0)
		cout<<text<<" -- is not a palindrome."<<endl<<endl;

}
 return 0;
}