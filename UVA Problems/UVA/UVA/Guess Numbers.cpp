//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cmath>
//#include <map>
//#include <vector>
//#include <set>
//#include <climits>
//#include <string>
//#include <cstring>
//#include <complex>
//#include<stack>
//using namespace std;
//
//typedef long long LL;
//typedef complex <double> point;
//#define FOR(i, s, e) for(int i = s; i < e; ++i)
//#define SZ(c) ((int)(c).size())
//#define ALL(c) (c).begin(), (c).end()
//#define MEMS(c, v) memset(c, v, sizeof c)
//#define EPS 1e-9
//#define OO 1e9
//#define X real()
//#define Y imag()
//#define vec(a, b) ((b) - (a))
//#define length(v) ((double)hypot((v).Y, (v).X))
//#define cross(a, b) ((conj(a)*(b)).imag())
//string inst[1000];
//vector<int> p[1000];
//int n, k;
//int getRes(int x, int y, char o){
//	if(o == '-')
//		return x - y;
//	if(o == '+')
//		return x + y;
//	if(o == '*')
//		return x * y;
//}
//int val[5];
//map<char, int> pr;
//map<char, int> pos;
//string s;
//int getVal(){
//	stack<char>o;
//	stack<int> v;
//	for(int i = 0; i < s.size(); ++i){
//		if(s[i] == '('){
//			o.push(s[i]);
//			continue;
//		}
//		if(s[i] >= 'a' && s[i] <= 'z'){
//			v.push(val[pos[s[i]]]);
//			continue;
//		}
//		if(s[i] == ')' || (pr[o.top()] >= pr[s[i]]))
//		{
//			int x = v.top();
//			v.pop();
//			int y = v.top();
//			v.pop();
//			v.push(getRes(y, x, o.top()));
//			o.pop();
//			if(s[i] != ')')
//				o.push(s[i]);
//			else
//				o.pop();
//		}
//		else{
//			o.push(s[i]);
//		}
//	}
//	return v.top();
//}
//int main() {
//	//freopen("input.in" , "r" , stdin);
//	pr['('] = -1;
//	pr['*'] = 1;
//	pr['+'] = pr['-'] = 0;
//	int n;
//	while(cin >> n >> val[0]){
//		if(!n && !val[0])
//			break;
//		for(int i = 1; i < n; ++i)
//			cin >> val[i];
//		int m;
//		cin >> m;
//		cin >> s;
//		set<char> ss;
//		for(int i = 0; i < s.size(); ++i)
//		{
//			if(s[i] >= 'a' && s[i] <= 'z'){
//				if(ss.find(s[i]) == ss.end()){
//					pos[s[i]] = ss.size();
//					ss.insert(s[i]);
//				}
//			}
//
//		}
//		sort(val, val + n);
//		bool ok = false;
//		do{
//			ok = ok || getVal() == m;
//		}while(next_permutation(val, val + n));
//		cout << (ok ? "YES" : "NO") << endl;
//	}
//}