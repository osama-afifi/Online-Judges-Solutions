# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>
# include <cstdlib>
# include <stdio.h>
# include <algorithm>

using namespace std;
bool BIGGER(string t1,string t2) ///if t2 bigger true
{
	if(t2.length()>t1.length())
		return true;
	if(t2.length()==t1.length() && t2>t1) //balk
		return true;
	else
		return false;
}

string SUM(string text1,string text2)
{
	string output;

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


int main ()
{ 
	freopen("input.in","r",stdin);
	//The Fibonacci numbers (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...) are defined by the recurrence:

	string FIBO[5002];

	FIBO[0]="1";
	FIBO[1]="2";

	for(int i=2;i<501;i++)
		FIBO[i]=SUM(FIBO[i-1],FIBO[i-2]);


	//cout<<FIBO[500].length()<<endl;

		int N;
		int counter;
		string text1 , text2;
	int index1=0,index2=0;
		while(cin>>text1>>text2)
		{
			if(text1=="0" && text2=="0")break;
	
			index1=0;
			while(BIGGER(FIBO[index1],text1) && text1!=FIBO[index1])
			{
				index1++;		
			}
			index2=index1;
			while(BIGGER(FIBO[index2],text2) && text2!=FIBO[index2])
			{
				index2++;		
			}
	int res=0;
	if(text2==FIBO[index2] || text2==FIBO[index2])
		res++;
	res+=index2-index1;

			printf("%d\n",res);
	}


	return 0;
}
