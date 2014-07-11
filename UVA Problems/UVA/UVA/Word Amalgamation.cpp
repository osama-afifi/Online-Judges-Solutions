//#include <iostream>
//#include <algorithm>
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
//
//using namespace std;
//
//string dic[101];
//string sor_dic[101];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int c=0;
//
//	while(cin>>dic[c])
//	{
//		if(dic[c]=="XXXXXX")break;
//		c++;
//	}
//	sort(dic,dic+c);
//	for(int i=0 ; i <c ; i++)
//	{
//		sor_dic[i]=dic[i];
//		sort(sor_dic[i].begin(),sor_dic[i].end());
//	}
//	string text;
//
//	while(cin>>text)
//	{
//		if(text=="XXXXXX")break;
//
//		sort(text.begin(),text.end());
//		bool found =false;
//
//
//		for(int i = 0 ; i<c ; i++)
//			if(text==sor_dic[i])
//			{
//				found=true;
//				cout<<dic[i]<<endl;
//			}
//
//
//			if(!found)
//				cout<<"NOT A VALID WORD"<<endl;
//
//			cout<<"******"<<endl;
//
//	}
//
//
//	return 0;
//}