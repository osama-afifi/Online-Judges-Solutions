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
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//
//class TopFox {
//public:
//	int possibleHandles(string familyName, string givenName) {
//		set<string>S;
//		vector<string>v1;
//		vector<string>v2;
//		string s = "";
//		FOR(i,0,familyName.length())
//		{
//			s+=familyName[i];
//			v1.push_back(s);
//		}
//		s="";
//				FOR(i,0,givenName.length())
//		{
//			s+=givenName[i];
//			v2.push_back(s);
//		}
//				FOR(i,0,v1.size())
//					FOR(j,0,v2.size())
//					S.insert(v1[i]+v2[j]);
//				
//				
//
//				return S.size();
//
//	}
//};
/////////////////////////////////////////////////////////////
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
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	long long n,k;
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%lld %lld",&k, &n);
//		long long maxi=n;
//		while(n!=1)
//		{
//			maxi = max(maxi,n);
//			if(n%2==0)
//			n/=2;
//			else
//			n = 3*n +1;
//			maxi = max(maxi,n);
//		}
//		printf("%lld %lld\n",k,maxi);
//	}
//
//}
//
//
///////////////////////////////////////////////////
