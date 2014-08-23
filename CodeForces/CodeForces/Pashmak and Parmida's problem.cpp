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
//int arr[1000009];
//int X[1000009];
//
//class BIT {
//    private:
//    int n;
//    vector<int> A;
//    public:
//    BIT() {
//        n=0;
//    }
//    BIT(int n) {
//        this->n=n;
//		A.clear();
//        A.resize(n+10);
//    }
//    void update(int x, int v) {
//        if (x<1 || x>n) return;
//        for (;x<=n;x+=x&-x) A[x]+=v;
//    }
//    int get(int x) const {
//        if (x<1 || x>n) return 0;
//        int ret=0;
//        for (;x>=1;x&=x-1) ret+=A[x];
//        return ret;
//    }
//};
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//	int n;
//	while(cin>>n)
//	{
//		map<int,int>M1;
//		map<int,int>M2;
//		BIT B = BIT(n);
//		FOR(i,1,n+1)
//		{
//			cin>>arr[i];
//			M1[arr[i]]++;
//			X[i]=M1[arr[i]];
//		}
//
//		LL res=0;
//		for(int i=n ; i>0 ; i--)
//		{
//			res += B.get(X[i]-1);
//			int v = ++M2[arr[i]];
//			B.update(v,1);
//		}
//		
//		cout << res <<endl;
//
//	}
//
//	return 0;
//}