# include <iostream>
# include <string>
# include <cstring>
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

	FIBO[0]="0";
	FIBO[1]="1";



	for(int i=2;i<5001;i++)
	FIBO[i]=SUM(FIBO[i-1],FIBO[i-2]);
	

int N;

while(cin>>N)
{

	cout<<"The Fibonacci number for "<<N<<" is "<<FIBO[N]<<endl;
}


	return 0;
}
