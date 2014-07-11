//#include<iostream>
//#include<cmath>
//#include<vector>
//#include<cstring>
//using namespace std;
//#define MOD (1000000007)
//#define ll long long
//ll countP(ll n, ll p){
//	ll res = 0;
//	ll q = p;
//	while(q <= n){
//		res += n / q;
//		q *= p;
//	}
//	return res;
//}
//ll fastPow(ll a, ll n){
//	if(n == 0)
//		return 1;
//	if(n % 2)
//		return (fastPow(a, n - 1) * a) % MOD;
//	ll x = fastPow(a, n / 2);
//	return (x * x) % MOD;
//}
//bool prime[10000001];
//const int MAX = 10000000;
//vector<int>primes;
//void sieve(){
//	memset(prime, true, sizeof prime);
//	prime[0] = prime[1] = false;
//	for(int i = 2; i * i <= MAX; ++i){
//		if(prime[i]){
//			for(int j = i * i; j < MAX; j += i)
//				prime[j] = false;
//		}
//	}
//	for(int i = 0; i <= MAX; ++i)
//		if(prime[i])
//			primes.push_back(i);
//}
//int main(){
//	//freopen("input.in", "r", stdin);
//	sieve();
//	int n;
//	while(cin >> n){
//		if(!n)
//			break;
//		ll res = 1;
//		for(int i = 0; i < primes.size() && primes[i] <= n; ++i){
//			int p = countP(n, primes[i]);
//			p -= p&1;
//			res =  (res%MOD * fastPow(primes[i], p)%MOD)%MOD;
//		}
//		cout << res << endl;
//	}
//}