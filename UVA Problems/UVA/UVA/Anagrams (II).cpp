//#include <iostream>
//#include <algorithm>
//#include <iomanip>
//#include <cstring>
//#include <cstdlib>
//#include <stdio.h>
//#include <string>
//#include <string.h>
//#include <math.h>
//#include <cmath>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//
//using namespace std;
//string text;
//string temp;
//string words[100];
//string sor_words[100];
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	cin>>t;
//	cin.ignore();
//	while(t--)
//	{
//		int n;
//		cin>>n;
//		cin.ignore();
//
//		for(int i = 0 ; i<n ; i++)
//		{
//			cin>>words[i];
//			sor_words[i]=words[i];
//			sort(sor_words[i].begin(),sor_words[i].end());
//		}
//
//		int m = 0;
//		int count=0;
//
//		while(getline(cin,text))
//		{
//		//	if(text=="")continue;
//			count=0;
//			if(text=="END")break;
//				else if(text=="")continue;
//			cout<<"Anagrams for: "<<text<<endl;
//			temp=text;
//			sort(text.begin(),text.end());
//			
//			for(int i = 0 ; i<n ; i++)
//			{
//				if(text==sor_words[i])
//					cout<<setw(3)<<++count<<") "<<words[i]<<endl;
//			}
//			if(count==0)
//				cout<<"No anagrams for: "<<temp<<endl;
//		}
//
//		if(t!=0)printf("\n");
//	}
//	return 0;
//}