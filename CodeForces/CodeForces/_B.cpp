//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//
//using namespace std;
//
//
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.in", "r" , stdin);
//
//    string s;
//	        priority_queue<int>Q1;
//        priority_queue<int>Q2;
//    while(cin>>s)
//    {
//        if(s!="#")
//        {
//            int num;
//            stringstream ss;
//            ss<<s;
//            ss>>num;
//			if(Q1.size()!=0 && num<=Q1.top())
//                Q1.push(num);
//			else 
//				Q2.push(-num);
//				while(Q1.size()>Q2.size())
//				{
//					int x = Q1.top();
//					Q1.pop();
//					Q2.push(-x);
//				}
//
//				while(Q2.size()>Q1.size())
//				{
//					int x = -Q2.top();
//					Q2.pop();
//					Q1.push(x);
//				}
//        }
//        else
//        {
//            int res;
//            if(Q2.size()>=Q1.size())
//            {
//                res = - Q2.top();
//                Q2.pop();
//            }
//            else
//            {
//                res = Q1.top();
//                Q1.pop();
//            }
//            cout << res <<endl;
//        }
//		//cout <<endl;
//    }
//
//
//    return 0;
//}
//
