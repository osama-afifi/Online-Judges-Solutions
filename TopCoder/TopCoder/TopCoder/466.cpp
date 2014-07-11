//250

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

using namespace std;
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define mp make_pair

class LotteryTicket {
public:
	vector<int>V;

	bool s(int index,int val)
	{
		if(val<0)return false;
		if(index==4)
			return (!val) ? true : false;
		bool s1 = s(index+1 , val-V[index]);
		bool s2 = s(index+1 , val);

		return s1|s2;
	}

	string buy(int price, int b1, int b2, int b3, int b4) {
		V.clear();
		V.push_back(b1);
		V.push_back(b2);
		V.push_back(b3);
		V.push_back(b4);
	
		if(!s(0,price))
			return "IMPOSSIBLE";
		return "POSSIBLE";

	}
};

//500

class LotteryCheating {
public:
	int minimalChange(string ID) {
		long long N;
		stringstream ss;
		ss<<ID;
		ss>>N;
		int mini = ID.length();
		int dig[15];
		for(long long i=0 ; i<=100000 ; i++)
		{
			long long sq = i*i;
			Set(dig,0);

			FOR(j,0,ID.length())
			{
				dig[ID.length()-1-j] = sq%10;
				sq/=10;
			}
			if(!sq)
			{
				int c=0;
				FOR(j,0,ID.length())
					if(dig[j]!=ID[j]-'0')c++;
				mini = min(mini,c);
			}


		}
		return mini;
	}
};