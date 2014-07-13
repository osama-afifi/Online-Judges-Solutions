//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp(c) make_pair(c)
//#define pb push_back(c)
//
//typedef long long LL;
//
//using namespace std;
//
//int arrx[100009];
//int arry[100009];
//int arrz[100009];
//
//int main() 
//{
// //   freopen("input.in","r",stdin);
//
//    string s;
//    cin>>s;
//
//
//    int h=0;
//    int p =9;
//    int m;
//    cin>>m;
//    int a,b;
//    arrx[0]=0;
//    arry[0]=0;
//    arrz[0]=0;
//
//    FOR(i,0,s.length())
//    {
//        arrx[i+1] = arrx[i]+(s[i]=='x');
//        arry[i+1] = arry[i]+(s[i]=='y');
//        arrz[i+1] = arrz[i]+(s[i]=='z');
//    }
//    while(m--)
//    {
//        cin>>a>>b;
//
//        int xx = arrx[b]-arrx[a-1];
//        int yy = arry[b]-arry[a-1];
//        int zz = arrz[b]-arrz[a-1];
//
//        if(b-a+1<3)
//            cout << "YES" <<endl;
//        else if(b-a+1==3)
//        {
//            if(xx==1 && xx==yy && yy==zz)
//                cout << "YES" <<endl;
//            else 
//                cout << "NO" <<endl;
//        }
//        else
//        {
//
//
//            if(abs(xx-yy)>1 || abs(zz-yy)>1 || abs(xx-zz)>1)
//                cout<<"NO" <<endl; 
//
//            else cout<< "YES" <<endl;
//        }
//
//    }
//
//
//
//
//    return 0;
//}