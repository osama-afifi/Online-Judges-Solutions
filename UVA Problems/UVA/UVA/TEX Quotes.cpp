
#include <iostream>
#include <string>
#include <iomanip>
#include<stdio.h>
//correct answer
using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);


	
	string text;

	int previous =2;
	while (getline(cin, text))
	{
	

	for(int i=0;i<text.length();i++)
	{
		if(text[i]=='"' && previous ==2)
		{			
			text.replace(i,1,"``");

				previous =1;
		
		}

		else if(text[i]=='"' && previous ==1)
		{
			
			text.replace(i,1,"''");
			
			previous =2;
						
		}
	}

	cout<<text<<endl;


	}
	return 0;
}


