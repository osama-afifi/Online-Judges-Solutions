//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//int main ()
//{
//	freopen("input.in", "r", stdin);
//
//	long int x[100000],count=0;
//
//		for(int i=0 ;  x[i]!=0 ; i++)
//		{
//			
//		   cin>>x[i];
//		   if (x[i]==0)
//		{
//			 break;}
//
//		}
//
//	
//		
//	
//	
// cout<<"PERFECTION OUTPUT"<<endl;
//			
//		long int sum=0;
//			for (int i=0; x[i]!=0 ;i++)
//			{sum=0;
//			for (int j=1; j<x[i] ;j++)	
//			{ 
//				if (x[i]%j==0)
//				sum=sum+j;
//			}
//
//
//	    
//
//
//		if (x[i]==1)
//			cout<<"     "<<x[i]<<"  DEFICIENT"<<endl;
//		else if (sum==x[i])
//			cout<<"     "<<x[i]<<"  PERFECT"<<endl;
//
//		else if (sum>x[i])
//			cout<<"     "<<x[i]<<"  ABUNDANT"<<endl;
//
//		else if (sum<x[i])
//			cout<<"     "<<x[i]<<"  DEFICIENT"<<endl;
//
//		}
//		cout<<"END OF OUTPUT"<<endl;  
//	
//	return 0;
//}
