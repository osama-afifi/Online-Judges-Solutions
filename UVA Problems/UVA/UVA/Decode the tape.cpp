#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

char from_binary_to_char(string text)
{
	int num=0;

	string bin;
	for(int i=0;i<text.length();i++)
	{
		if(text[i]==' ')
			bin+="0";
		if(text[i]=='o')
			bin+="1";
	}
	double temp=0;
	for(int i=bin.length()-1;i>=0;i--){
		temp=((bin[i])-'0');
		
		num+=temp*pow(2.0,(double)bin.length()-1-i);
	}
	return num;
}


int main()
{
	freopen("input.in","r",stdin);
	string text,output;
	while(getline(cin,text))
	{
		if(text[0]=='|')
	printf("%c",from_binary_to_char(text));

	}
	//printf("\n");

	return 0;
}