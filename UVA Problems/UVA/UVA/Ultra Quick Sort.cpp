
#include <iostream>
#include <math.h>
#include <string>
#include<iomanip>
using namespace std;
int main()
{
////////////////////Insertion Sort////////////////////////////////////////
	int num[11]={5,2,4,1,3};

	int i, j, key;
      for(i = 1; i < 5; i++)    // Start with 1 (not 0)
     {
            key = num[i];
            for(j = i - 1; (j >= 0) && (num[j] > key); j--)   // Smaller values move up
           {
                num[j+1] = num[j];
           }
          num[j+1] = key;    //Put key into its proper location   /// (j+1) 3shan bytl3 mn el loop zyada lma not satisfy el condition
      }


	  for(int q=0; q<5;q++)
	  cout<<num[q]<<" ";
////////////////////////////////////////////////////////////////////////////////////


return 0;
}