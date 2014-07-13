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
//
//int main() 
//{
//   // freopen("input.in","r",stdin);
//
//    int arr[1009];
//    int n,d,m;
//    cin>>n>>d;
//    FOR(i,0,n)
//        cin>>arr[i];
//    cin>>m;
//    sort(arr,arr+n);
//    int c= 0;
//    int sum=0;
//    while(m--)
//    {
//        if(c>=n)
//            sum-=d;
//        else sum+=arr[c];
//        c++;
//    }
//    cout<<sum<<endl;
//
//    return 0;
//}