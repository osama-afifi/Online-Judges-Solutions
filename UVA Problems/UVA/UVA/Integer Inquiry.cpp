//# include <iostream>
//# include <string>
//# include <cstring>
//# include <iomanip>
//# include <cstdlib>
//# include <algorithm>
//
//using namespace std;
//
//int main ()
//{ 
//	freopen("input.in","r",stdin);
//	string text[500];
//	string output;
//	int X=0;
//	int max=0;
//
//	while(getline(cin,text[X]) )
//	{
//		if(text[X].length()>max)
//			max=text[X].length();
//
//		if(text[X]=="0")
//			break;
//
//		X++;
//	}
//
//	for(int q=0;q<X;q++)
//	{
//		while(true)
//		{
//			if(text[q].length()==max)break;
//			text[q].insert(0," ");
//
//		}
//
//	}
//
//
//	int sum_column=0;
//	int remainder=0;
//	int added=0;
//
//
//	for(int j=max-1;j>=0;j--)
//	{
//		sum_column=remainder;
//
//		for(int i=0;i<X ;i++)
//		{
//			if((text[i][j]!=' '))
//			sum_column=sum_column+(text[i][j]-'0');
//
//		}
//
//		if(sum_column<=9 &&j!=0)
//		{
//			added=sum_column;
//			remainder=0;
//		}
//
//		else if(sum_column>=10 && j!=0)
//		{
//			remainder=sum_column/10;
//			added=sum_column%10;
//		}
//
//		if(j!=0)
//		{
//			char ch =added+'0';
//			output.insert(0,1,ch);
//		}
//		else
//		{
//			string last;
//			while(sum_column!=0)
//			{
//				last.insert(0,1,sum_column%10+'0');
//				sum_column=sum_column/10;
//			}
//			output.insert(0,last);
//		}
//
//	}
//
//	cout<<output<<endl;
//
//	return 0;
//}
