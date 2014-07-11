#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>

using namespace std;

int main ()
{
	//freopen("input.in", "r", stdin);
	//freopen("output2.out", "w", stdout);

	string text[150];

	vector< vector<char> > items(150,150);

	int max=0;
	int q=0;
	while(getline (cin,text[q]))
	{
		if(text[q].length()>max)
			max=text[q].length();
		q++;
	}

	for(int i=0;i<q;i++)
		for(int j=0;j<text[i].length();j++)
			items[j][q-i-1]=text[i][j];

	for(int i=0;i<max;i++)
	{
		for(int j=0;j<q;j++)
		{
			if(items[i][j]!=0)
			cout<<items[i][j];
		}
		cout<<endl;
	}
	return 0;
}

//
//#include <iostream>
//#include <vector>
//#include <iomanip>
//#include <cstdlib>
//#include <algorithm>
//#include <math.h>
//#include <string>
//
//
//using namespace std;
//
//int main ()
//{
//	freopen("input.in", "r", stdin);
//	//freopen("output2.out", "w", stdout);
//
//	string text[150];
//
//	char items[150][150]={};
//
//	int max=0;
//	int q=0;
//	while(getline (cin,text[q]))
//	{
//		if(text[q].length()>max)
//			max=text[q].length();
//		q++;
//	}
//
//	for(int i=0;i<q;i++)
//		for(int j=0;j<text[i].length();j++)
//			items[j][q-i-1]=text[i][j];
//
//	for(int i=0;i<max;i++)
//	{
//		for(int j=0;j<q;j++)
//		{
//			if(items[i][j]!=0)
//			cout<<items[i][j];
//			else
//				cout<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
