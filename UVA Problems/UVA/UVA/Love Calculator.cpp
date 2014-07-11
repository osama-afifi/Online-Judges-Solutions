#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
	freopen("input.in", "r", stdin);

	string text1;
	string text2;

	while(getline(cin,text1),getline(cin,text2))
	{


		long long sum1=0;
		long long sum2=0;
		long long dig1=0;
		long long dig2=0;

		for(long long  i=0;i<text1.length();i++)
		{

			if (text1[i]>=65 && text1[i]<=90)
				sum1=sum1+(text1[i]-64);

			else if (text1[i]>=97 && text1[i]<=122)
				sum1=sum1+(text1[i]-96);

		}
		if (sum1%9==0)
			dig1=9;
		else
			dig1=sum1%9;

		for(long long  i=0;i<text2.length();i++)
		{
			if (text2[i]>=65 && text2[i]<=90)
				sum2=sum2+(text2[i]-64);

			else if (text2[i]>=97 && text2[i]<=122)
				sum2=sum2+(text2[i]-96);
		}

		if (sum2%9==0)
			dig2=9;
		else
			dig2=sum2%9;


		if(dig2>dig1)
			swap(dig2,dig1);

		if(dig1==0)
		{
			cout<<endl;
			continue;
		}
		float res=0;
		res=(float(dig2)*100/float(dig1));


		cout<< setprecision(2) << fixed << res << " %" <<endl;

	}

	return 0;
}
