////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
using namespace std;

////////////////////////////////////////////////

int main ()
{ freopen("input.in", "r", stdin);

long long n,x[100],p[100],kase=1;
while (cin>>n)
{


	for(int i=0;i<n;i++)
	{cin>>x[i];}

	/*unsigned */long long y,max=0;
	long long p=1;
	




	////////////////BRUTE FORCING MAX PRODUCT//////////////////
p=1;
	for(int i=0;i<n;i++)
	{
		p=x[i];
		for(int j=i+1;j<n;j++)
		{
			if (x[j]==0)
				p=1;

			p=p*x[j];
			if (p>max)
				max=p;
		}

	}
	///////////////////////////////////////////

	for(int i=0;i<n;i++)
	{
	if (x[i]>max)
	max=x[i];
	}

	if (max<0)
		max=0;

result:

	cout<<"Case #"<<kase++<<": "<<"The maximum product is "<<max<<"."<<endl<<endl;
}
return 0;
}





























//
//
/////////////////////////////////////////////////////////////////////////
//#include<iostream>
//#include<cstdlib>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{ freopen("input.in", "r", stdin);
//    int n, index = 1;
//    long long ar[20], max, tmp;
//    while(cin >> n)
//    {
//        for(int i = 0; i < n; i++)
//            cin >> ar[i];
//        max = -1;
//        for(int i = 0; i < n; i++)
//        {
//            tmp = 1;
//            for(int j = i; j < n; j++)
//            {
//                tmp *= ar[j];
//                if(tmp > max)
//                    max = tmp;
//                if(tmp == 0)
//                    tmp = 1;
//            }
//        }
//        if(max < 0)
//            max = 0;
//        cout << "Case #" << index++ << ": The maximum product is " << max << ".\n";
//        cout << endl;
//    }
//    system("PAUSE");
//    return EXIT_SUCCESS;
//}


//
//#include<iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//int main()
//{  
//	freopen("input.in", "r", stdin);
//	long long int counter , numbers[20] , cases=1 , ans=1 ;
//
//	while(cin>>counter)
//	{
//
//		for(int i=0; i<counter ;i++)
//		{
//			cin>>numbers[i];
//		}
//		long long int max=0;
//		for(int i=0;i<counter;i++)
//		{
//			int ans=1;
//			for(int j=i;j<counter;j++)
//			{
//				ans*=numbers [j];
//				if(ans>max)
//					max=ans;
//			}
//			for(int k=0;k<i;k++)
//			{
//				ans *= numbers[k];
//				if(ans>max)
//					max=ans;
//			}
//		}
//
//
//		cout<<"Case #"<< cases <<": The maximum product is "<< max <<"."<<endl;
//		cases ++;
//	}
//
//
//	return 0;
//}
