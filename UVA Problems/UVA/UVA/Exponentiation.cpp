#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string sum;

string SUM(string text1,string text2)
{

	string output;
	char ch;
	int X=0;
	int max=0;
	if(text1.length()>=text2.length())
		max=text1.length();
	else
		max=text2.length();
	while(true)
	{
		if(text1.length()==max)break;
		text1.insert(0," ");
	}
	while(true)
	{
		if(text2.length()==max)break;
		text2.insert(0," ");
	}
	int sum_column=0;
	int remainder=0;
	int added=0;
	for(int j=max-1;j>=0;j--)
	{
		//sum[i] = (a[i] + b[i]) % 10;
		//sum[i + 1] = (a[i] + b[i]) / 10;

		sum_column=remainder;
		if((text1[j]!=' ')&&(text2[j]!=' '))
			sum_column=remainder+text2[j]+text1[j]-96;
		else if ((text1[j]==' ')&&(text2[j]==' '))break;
		else if (text1[j]==' ')
			sum_column=remainder+text2[j]-48;
		else if (text2[j]==' ')
			sum_column=remainder+text1[j]-48;
		if(sum_column<=9 &&j!=0)
		{added=sum_column;
		remainder=0;}
		else if(sum_column>=10 && j!=0)
		{remainder=sum_column/10;
		added=sum_column%10;}
		if(j!=0)
		{ch =added+48;
		output.insert(0,1,ch);}
		else
		{
			string last;
			while(sum_column!=0)
			{
				last.insert(0,1,sum_column%10+48);
				sum_column=sum_column/10;
			}
			output.insert(0,last);
		}
	}
	return output;
}

string PRODUCT(string text1 ,string text2)
{

	string tmp,output;
	int l1, l2, c = 0;
	int n1[2000] = {0}, n2[2000] = {0}, ans[2000] = {0};
	l1 = text1.length();
	l2 = text2.length();
	for (int i = 0; i < l1; i++)
		n1[l1 - (i + 1)] = text1[i] - 48;
	for (int i = 0; i < l2; i++)
		n2[l2 - (i + 1)] = text2[i] - 48;
	for (int i = 0; i < l2; i++)
	{for (int j = 0; j < l1; j++) 
	{
		c = i + j;
		ans[c] += n1[j] * n2[i];
		while (ans[c] / 10 != 0) 
		{	ans[c + 1] += ans[c] / 10;
		ans[c] %= 10;
		c++;
		}
	}	}

	if (text1 == "0" || text2 == "0")
		c = 0;
	for (int i = c; i >= 0; i--)
	{
		output.append(1,(ans[i]+48));
		ans[i] = 0;
	}

	return output;
}

string POWER(string text ,int power)
{
	sum="1";
	for(int i=0 ; i<power ; i++)
	{
		sum=PRODUCT(sum,text);
	}
	return sum;
}



string zeros = "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
int main()
{
	freopen("input.in","r",stdin);
	double inp;
	string text , res ;
	int p ;
	while(cin>>text)
	{
		cin>>p;
		int dot,enddot;

		for(int i = text.length()-1 ; i>=0 ; i--)
			if(text[i]=='0')
				text.erase(i,1);	
			else break;

			//for(int i = 0 ; i<text.length() ; i++)
			//if(text[i]=='0')
			//{
			//	text.erase(i,1);	
			//	i++;
			//}
			//else break;


			for(dot=text.length()-1 ; dot>=0 ; dot--)
			{
				if(text[dot]=='.')
					break;
			}
			enddot=text.length()-1-dot;


					text.erase(dot,1);
					res=POWER (text,p);

					if(res[0]=='0')
						res=zeros+res;

				



						for(int i = res.length()-1 ; i>dot ; i--)
							if(res[i]=='0')							
								res.erase(i,1);	
							else break;

	res.insert(res.length()-( enddot *p ),".");

					for(int i= 0 ; i<dot ; i++)
						if(res[i]=='0')
						{
							res.erase(i,1);
							i--;
						}
						else break;

							cout<<res<<endl;

	}

	return 0;
}