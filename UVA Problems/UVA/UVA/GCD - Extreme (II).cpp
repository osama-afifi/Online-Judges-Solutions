#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;


//unsigned int gcd(unsigned long long a, unsigned long long b)
//{
//  // simple cases (termination)
//  if (a == b)
//    return a;
//  if (a == 0)
//    return b;
//  if (b == 0)
//    return a;
// 
//  // look for factors of 2
//  if (~a & 1) // a is even
//    if (b & 1) // b is odd
//      return gcd(1, b);
//    else // both u and v are even
//      return gcd(1, 1) ;
//  if (~b & 1) // u is odd, v is even
//    return gcd(a, 1);
// 
//  // reduce larger argument
//  if (a > b)
//    return gcd((a - b) >> 1, b);
//  return gcd((b - a) >> 1, a);
//}

int main ()
{
	freopen("input.in", "r", stdin);

	unsigned int N;

	while(cin>>N &&N!=0)
	{
		unsigned long long G=0;

		for(unsigned int i=1;i<N;i++)
			for(unsigned int j=i+1;j<=N;j++)
				G+=gcd_bin(i,j);


		cout<<G<<endl;
	}

	return 0;
}
