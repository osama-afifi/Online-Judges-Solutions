#include <fstream>
#include <cstdlib>
using namespace std;

void main()
{
	ofstream fout("big.in");

	const int nDays = 1000;
	const int nChicken = 1000;
	const int eggPrice = 1000;
	
	fout<<nDays<<' '
		<<nChicken<<' '
		<<eggPrice<<endl;
	for(int i = 0;i< nDays;i++)
	{
		fout<<rand()%10000<<' '
			<<rand()%10<<endl;
	}
}