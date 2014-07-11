# include <iostream>
# include <string>

using namespace std;

int div400 (string no)
{
	int div400;


	int num= (no[no.length()-1]-'0') + (no[no.length()-2]-'0')*10  + (no[no.length()-3]-'0')*100 + (no[no.length()-4]-'0')*1000;

	if(num%400==0)
		return div400=1;
	else
		return div400=0;
}

int div100 (string no)
{
	int div100;


	int num= (no[no.length()-1]-'0') + (no[(no.length()-2)]-'0')*10;

	if(num==0)
		return div100=1;
	else
		return div100=0;
}

int div11 (string no)
{
	int div11;
	long long sum_even=0;
	long long sum_odd=0;
	for(int i=0;i<no.length();i+=2)
	{
		sum_odd=sum_odd+no[i]-'0';
	}

	for(int i=1;i<no.length();i+=2)
	{
		sum_even=sum_even+no[i]-'0';
	}

	if ((sum_even-sum_odd)%11==0)
		return div11=1;

	else
		return div11=0;
}

int div3 (string no)
{
	int div3;
	int sum=0;
	for(int i=0;i<no.length();i++)
	{
		sum=sum+no[i]-'0';
	}

	if (sum%3==0)
		return div3=1;

	else
		return div3=0;
}

int div4 (string no)
{
	int div4;
	int sum=0;

	int number=no[no.length()-1]-'0' + (no[no.length()-2]-'0')*10;

	if (number%4==0)
		return div4=1;

	else
		return div4=0;
}

int div5 (string no)
{
	int div5;
	int sum=0;

	int number=no[no.length()-1]-'0';

	if (number==5 || number==0)
		return div5=1;

	else
		return div5=0;
}

int main()
{
	freopen("input.in", "r", stdin);
	long long n;
	int leap;
	int huluculu;
	int buluculu;
	int first=0;
	string no;
	while(cin>>no)
	{

		int divisble_3=div3(no);
		int divisble_4=div4(no);
		int divisble_5=div5(no);
		int divisble_11=div11(no);
		int divisble_100=div100(no);
		int divisble_400=div400(no);

		if (first==1)
			cout<<endl;

		first=1;

		if (divisble_4==1)
		{

		leap=1;
		
		if (divisble_100==1 && divisble_400==0 )
			leap=0;

		}
		else
			leap=0;

		if ( divisble_5==1 && divisble_3==1)
			huluculu=1;
		else
			huluculu=0;


		if ( divisble_5==1 && divisble_11==1 && leap==1)
			buluculu=1;
		else
			buluculu=0;



		if (leap==1)
			cout<<"This is leap year."<<endl;

		if (huluculu==1)
			cout<<"This is huluculu festival year."<<endl;

		if (buluculu==1)
			cout<<"This is bulukulu festival year."<<endl;

		if (leap==0 &&  buluculu==0 && huluculu==0)
			cout<<"This is an ordinary year."<<endl;


	}

	return 0;
}