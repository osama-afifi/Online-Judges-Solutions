# include <iostream>
# include <string>
# include <cstring>
# include <sstream>
# include <iomanip>
# include <cstdlib>
# include <algorithm>

using namespace std;

string SUM(string text1,string text2)
{
	string output;

	int X=0;
	int max=0;
	
	if(text1.length()>=text2.length())
		max=text1.length();

	else
		max=text2.length();


	//while(true)
	//{
	//	if(text1.length()==max)break;
	//	text1.insert(0," ");

	//}

	//while(true)
	//{
	//	if(text2.length()==max)break;
	//	text2.insert(0," ");

	//}




	int sum_column=0;
	int remainder=0;
	int added=0;


	for(int j=max-1;j>=0;j--)
	{
		sum_column=remainder;


		if((text1[j]!=' ')&&(text2[j]!=' '))
			sum_column=remainder+(text2[j]-'0')+(text1[j]-'0');

		else if ((text1[j]==' ')&&(text2[j]==' '))
		{}

		else if (text1[j]==' ')
			sum_column=remainder+text2[j]-'0';


		else if (text2[j]==' ')
			sum_column=remainder+text1[j]-'0';


		if(sum_column<=9 &&j!=0)
		{
			added=sum_column;
			remainder=0;
		}

		else if(sum_column>=10 && j!=0)
		{
			remainder=sum_column/10;
			added=sum_column%10;
		}

		if(j!=0)
		{
			char ch =added+'0';
			output.insert(0,1,ch);
		}
		else
		{
			string last;
			while(sum_column!=0)
			{
				last.insert(0,1,sum_column%10+'0');
				sum_column=sum_column/10;
			}
			output.insert(0,last);
		}

	}

	return output;
}

int main()
{ 

	//freopen("input.in","r",stdin);
	string text1;
	string text2;


	while(getline(cin,text1),getline(cin,text2))
	{

		string output;


		int max=0;
		int big=0;

		for(int i=0;i<text1.length();i++)
		{
			if(text1[i]=='0')
			{
				text1.erase(0,1);
					i--;
			}

			else
				break;
		}

		for(int i=0;i<text2.length();i++)
		{
			if(text2[i]=='0')
			{
				text2.erase(0,1);
					i--;
			}

			else
				break;
		}

		if(text1=="" ||text2=="" )
		{
		cout<<0<<endl;
		continue;
		}

		if(text1.length()>=text2.length())
		{
			max=text1.length();
			big=1;
		}
		else
		{
			max=text2.length();
			swap(text1,text2);
		}

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

		string CARRY[500];

		stringstream ss;
		string num;

		int q;
		int k;
		bool over=false;

		for(int i=max-1;i>=0;i--)
		{
			string ROW;
			string temp;
			for(int j=max-1;j>=0;j--)
			{
				if(text2[i]==' ')
				{
					over=true;
					break;
				}

				ss.clear();
				ss<<(text1[j]-'0')*(text2[i]-'0');

				ss>>temp;
				k=max-1-j;
				temp.append(k,'0');

				ROW=SUM(ROW,temp);

			}

			if(over==true)break;

			q=max-1-i;
			ROW.append(q,'0');
			CARRY[q]=ROW;
		}

		string OUTPUT;
		for(int i=0;i<max;i++)
		{
			OUTPUT=SUM(OUTPUT,CARRY[i]);
		}


		cout<<OUTPUT<<endl;

	}




	return 0;
}
