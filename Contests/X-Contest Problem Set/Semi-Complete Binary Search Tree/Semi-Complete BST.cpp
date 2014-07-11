
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
using namespace std;

ifstream fin("input.txt");
#define cin fin

ofstream fout("output.txt");
#define cout fout

int pOf2[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};

int getPreviousPowerOf2(int n)
{
	int i = 0;
	while(pOf2[i] <= n)
		i++;
	return pOf2[i-1];
}

unsigned long long GCD(unsigned long long a, unsigned long long b)
{
	while(b != 0)
	{
		unsigned long long t = b;
		b = a % b;
		a = t;
	}
    return a;
}

unsigned long long Comb(int a, int b)
{
	//a C b
	b = max(b, a - b);
	unsigned long long n = 1;
	unsigned long long d = 1;
	unsigned long long g = 1;
	int i, j, nn, dd;
	for(i=b+1, j=1; i<=a; i++, j++)
	{
		nn = i;
		dd = j;

		//prevent overflow
		g = GCD(n, dd);
		n /= g;
		dd /= g;

		//prevent overflow
		g = GCD(nn, dd);
		nn /= g;
		dd /= g;

		n *= nn;
		d *= dd;

		g = GCD(n, d);
		n /= g;
		d /= g;
	}
	return n;
}

int main()
{
	int i;
	while(cin>>i)
	{
		int n = i;
		int m = getPreviousPowerOf2(n) - 1;
		int a = (m + 1) / 2;
		int d = n - m;
		unsigned long long res = Comb(a * 2, d);
		cout<<setw(3)<<i<<" "<<res<<endl;
	}
	return 0;
}