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
//#define mp(a,b) make_pair(a,b)
//#define all(v) v.begin() ,v.end()
//#define pb(c) push_back(c)
//
//typedef long long LL;
//
//using namespace std;
//
////int to1D(int x , int y)
////{
////		x*8+y;
////}
////void to2D(int z , int&a , int&b)
////{
////		a= z/8;
////		b= z%8;
////}
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//
//	int x,y,a,b;
//	cin>>x>>y;
//	cin>>a>>b;
//
//	if(x==a && y==b)
//		cout<< "0" << " ";
//	else if(a==x || b==y  || a==y || b==x)cout <<"1"<<" ";
//	else cout << "2" << " ";
//
//
//	if(x==a && y==b)
//		cout << "0" << " ";
//	else if((x+y)%2 != (a+b)%2)
//		cout<< 0 << " ";
//	else
//		cout<< abs(abs(x-a)-abs(y-b))+1 << " "; 
//
//	cout<< max(abs(x-a),abs(y-b)) << endl; //king
//
//
//	return 0;
//}



#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define mp(a,b) make_pair(a,b)
#define all(v) v.begin() ,v.end()
#define pb(c) push_back(c)

typedef long long LL;

using namespace std;

int main() 
{
	freopen("input.in","r",stdin);
	int x,y,a,b;
	cin>>x>>y>>a>>b;
	if((x-a)!=0 && (y-b)!=0)
		cout<<2 <<" ";
	else if((x-a)!=0 || (y-b)!=0)
		cout<<1<< " ";
	else cout<<0;
	if(abs(x-a)==abs(y-b))
		cout<<1<< " ";
	else
	{
		if(((x-a)%2==0 &&(y-b)%2==0)||((x-a)%2==1 &&(y-b)%2==1))
			cout<<2;
		else cout<<0<< " ";
	}

		cout<< ((abs(x-a)>abs(y-b))?abs(x-a):abs(y-b)) << " ";
		cout<<endl;

		return 0;
}


//////////////////////


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
//#define mp(a,b) make_pair(a,b)
//#define all(v) v.begin() ,v.end()
//#define pb(c) push_back(c)
//
//typedef long long LL;
//
//using namespace std;
//
////int to1D(int x , int y)
////{
////		x*8+y;
////}
////void to2D(int z , int&a , int&b)
////{
////		a= z/8;
////		b= z%8;
////}
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//
//	int x,y,a,b;
//	cin>>x>>y;
//	cin>>a>>b;
//
//	if(x==a && y==b)
//		cout<< "0" << " ";
//	else if(a==x || b==y  || a==y || b==x)cout <<"1"<<" ";
//	else cout << "2" << " ";
//
//
//	if(x==a && y==b)
//		cout << "0" << " ";
//	else if((x+y)%2 != (a+b)%2)
//		cout<< 0 << " ";
//	else
//		cout<< abs(abs(x-a)-abs(y-b))+1 << " "; 
//
//	cout<< max(abs(x-a),abs(y-b)) << endl; //king
//
//
//	return 0;
//}



#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define mp(a,b) make_pair(a,b)
#define all(v) v.begin() ,v.end()
#define pb(c) push_back(c)

typedef long long LL;

using namespace std;

	int n, i, j, arr[101], matrix[101][101], ok=0, k;
	 bool vis[101][101];

int main() 
{
	freopen("input.in","r",stdin);
	
	while(cin>>n)
	{
		Set(vis,0);
		Set(matrix,0);
		Set(arr,0);
		for (i=0;i<n;i++) 
		{
			cin>>arr[i];
			for (j=0;j<arr[i];j++) 
			{
				cin>>matrix[i][j];
				vis[i][matrix[i][j]] = 1;
			}
		}

		for (i=0;i<n;i++) {
			ok = 1;
			for (j=0; j<n && ok; j++) 
			{
				if (i==j || arr[i]<arr[j])
					continue;
				ok = 0;
				for (k=0; k < arr[j];k++) 
				{
					if (!vis[i][matrix[j][k]])
					{
						ok = 1;
						break;
					}
				}
			}

			if (ok) 
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0;

}