
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;


int main()

{		

	freopen("input.in","r",stdin);

	map <string,string> word;

	string text;
	string text1;
	string text2;
	string question;

	int q=0;

	while(getline(cin,text)&&text!="")
	{

		stringstream ss;
		ss<<text;

		ss>>text1;
		ss>>text2;


		word[text2]=text1;


		ss.clear();

	}


	while(getline(cin,question))
	{

	
		if(!word[question].empty())
			cout<<word[question]<<endl;

		else
			cout<<"eh"<<endl;
	}

	

	return 0;
}