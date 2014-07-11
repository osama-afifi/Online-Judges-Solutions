//#include <stdio.h>
//#include <iostream>
//#include <set>
//#include <string>
//
//using namespace std;
//int main() 
//{
//	freopen("input.in","r",stdin);
//
//    string line, s1, s2;
//    set<string> S;
//	set<string>::iterator it;
//    while(cin >> line)
//        S.insert(line);
//    for(it = S.begin(); it != S.end(); it++)
//	{
//        int len = (*it).length();
//        for(int j = 0; j < len-1; j++)
//		{
//            s1 = (*it).substr(0, j+1);
//            s2 = (*it).substr(j+1, len-j);
//            if(S.find(s1) != S.end() && S.find(s2) != S.end()) 
//			{
//                cout << (*it) << endl;
//                break;
//            }
//        }
//    }
//    return 0;
//}