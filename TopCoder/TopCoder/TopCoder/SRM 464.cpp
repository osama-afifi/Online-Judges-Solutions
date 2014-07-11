//250
class ColorfulBoxesAndBalls {
public:
	int getMaximum(int numRed, int numBlue, int onlyRed, int onlyBlue, int bothColors) {
		int s1,s2=-1<<25,s3=-1<<25;
		s1 = numRed*onlyRed + numBlue*onlyBlue;
	if(numRed>numBlue)
		s2 = numBlue*bothColors*2 + (numRed-numBlue)*onlyRed;
	else 
		s2 = numRed*bothColors*2 + (numBlue-numRed)*onlyBlue;
		return max(s1,s2);
	}
};

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


class ColorfulStrings {
public:

	int vis[10];
	set<int>S;
	int N,K;



	string getKth(int n, int k) {
	S.clear();	
	N=n;
	if(n>8 || k==0)return "";
	if(n==1)
		if(k>10)return "";
		else return ""+k+'1';

	vector<int>V;

	for(int i =2;i<=9 ; i++)
		V.push_back(i);



	}
};

