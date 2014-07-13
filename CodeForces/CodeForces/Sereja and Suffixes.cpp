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
//int arr[100009];
//int res[100009];
//
//
//int main() 
//{
//    //freopen("input.in","r",stdin);
//
//    int n,m;
//
//    cin>>n>>m;
//    FOR(i,0,n)
//        scanf("%d" , &arr[i]);
//    set<int>S;
//    for(int i=n-1 ; i>=0 ; --i)
//    {
//        S.insert(arr[i]);
//        res[i]=S.size();
//    }
//    int x;
//    while(m--)
//    {
//        scanf("%d" , &x);
//    cout<< res[x-1] <<endl;
//    
//    }
//
//    return 0;
//}