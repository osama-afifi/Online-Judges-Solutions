////#include <iostream>
////#include <iomanip>
////
////using namespace std;
////int main ()
////{
////	//freopen("input.in", "r", stdin);
///////////////TO GET GCD THE TIME CONSUMING METHOD//////////////////
////int i , j;
////cin>>i>>j;
////if (i>j) /////Swapping
////	{int temp=i;
////	i=j;
////	j=temp;
////	}
////int gcd=i;
////for(;(j%gcd!=0 || i%gcd!=0);gcd--)
////{}
////cout<<gcd<<endl;
////	return 0;
////}
//
////////////////////////////////////////////////////////////////////////
////
////
////#include <iostream>
////#include <iomanip>
////
////using namespace std;
////int main ()
////{
////	//freopen("input.in", "r", stdin);
///////////////TO GET GCD METHOD 2//////////////////
////int i , j;
////cin>>i>>j;
////
//////if (i>j) /////Swapping
//////	{int temp=i;
//////	i=j;
//////	j=temp;
//////	}
//////////GCD (i,j) /////Euclid's
////int gcd;
////while (true)
////{
////	if (i==0 || j==0)
////	{break;}
////if (i>j)
////	{i=i%j;}
////if (i<j)
////	{j=j%i;}
////
////}
////gcd=i+j;
//////////////////////////////////////////
////cout<<gcd<<endl;
////	return 0;
////}
//
//
////////////////////////////////////////////////////////////
//
//
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//int main ()
//{
//	//freopen("input.in", "r", stdin);
/////////////TO GET GCD METHOD 2//////////////////
//int i , j;
//cin>>i>>j;
//
////if (i>j) /////Swapping
////	{int temp=i;
////	i=j;
////	j=temp;
////	}
////////GCD (i,j) /////Euclid's
//int gcd;
//while (true)
//{
//	if (i==j)
//	{break;}
//if (i>j)
//	{i=i-j;}
//if (i<j)
//	{j=j-i;}
//
//}
//gcd=i;
////////////////////////////////////////
//cout<<gcd<<endl;
//	return 0;
//}