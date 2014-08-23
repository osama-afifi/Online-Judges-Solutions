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
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//
//int main() {
//	freopen("input.in", "r" , stdin);
//	int n,m,w,i,j;
//	long long int a[100005];
//	scanf("%d%d%d",&n,&m,&w);
//	set < pair<long long int ,int > > st;
//	for(i=0;i<n;i++)
//	{
//		scanf("%lld",&a[i]);
//		st.insert(pair<long long int,int >(a[i],i));
//	}
//	set< pair<long long int, int > >::iterator it;
//	pair<long long int ,int > value;
//	long long int ax;
//	int ai;
//	for(i=0;i<m;i++)
//	{
//		it=st.begin();
//		value=*it;
//		ax=value.first;
//		ai=value.second;
//		for(j=0;j<w;j++)
//		{
//			st.erase( pair<long long int ,int > (a[j+ai] ,j+ai ) );
//			a[j+ai]++;
//			st.insert( pair<long long int ,int > (a[j+ai] ,j+ai)  );
//		}
//	}
//	long long int min=2000000000;
//	for(i=0;i<n;i++)
//	{
//		if(a[i]<min)
//		min=a[i];
//	}
//	cout << min << endl;
//	return 0;
//}
//
////#include<iostream>
////#include<iomanip>
////#include<string>
////#include<cstring>
////#include<stdio.h>
////#include<algorithm>
////#include<vector>
////#include<map>
////#include<sstream>
////#include<queue>
////#include<set>
////#include<stack>
////#include<math.h>
////
////
////#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
////#define ALL(A) A.begin(), A.end()
////#define Set(a, s) memset(a, s, sizeof (a))
////#define pb push_back
////#define mp make_pair
////typedef long long LL;
////using namespace std;
////
////
////template <class T>
////struct monotonic_queue {
////	deque<T> q1;
////	deque<T> q2;
////	T pop()
////	{
////		T ans = q1.front();
////		if(ans == q2.front())
////			q2.pop_front();
////		q1.pop_front();
////		return ans;
////	}
////	void push(T i)
////	{
////		while(q2.size() && q2.back() > i)
////			q2.pop_back();
////		q2.push_back(i);
////		q1.push_back(i);
////	}
////	T min()
////	{
////		return q2.front();
////	}
////	T size() 
////	{
////		return q1.size();
////	}
////};
////
////LL arr[100009];
////int main()
////{
////	freopen("input.in", "r" , stdin);
////
////	int n,m,w;
////	while(cin>>n>>m>>w)
////	{
////		vector<LL>V;
////		FOR(i,0,n)
////			cin>>arr[i];
////		monotonic_queue<LL>Q;
////		FOR(i,0,w)
////			Q.push(arr[i]);
////		V.push_back(Q.min());
////		FOR(i,w,n)
////		{
////			Q.pop();
////			Q.push(arr[i]);
////			V.push_back(Q.min());
////		}
////		priority_queue<LL>PQ;
////		FOR(i,0,V.size())
////			PQ.push(-V[i]);
////
////		while(m--)
////		{
////			LL x = -PQ.top();
////			x++;
////			PQ.pop();
////			PQ.push(-x);
////		}
////
////		cout << -PQ.top() << endl;
////	}
////	return 0;
////}
//
