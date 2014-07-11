//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//
//int **dynamicArray = 0;
//
////memory allocated for elements of rows.
//
//
//dynamicArray = new int *[7] ;
//
////memory allocated for  elements of each column.
//
//
//for( int i = 0 ; i < 7 ; i++ )
//dynamicArray[i] = new int[6];
//
////free the allocated memory
//
//for( int i = 0 ; i < 7 ; i++ )
//	for( int j = 0 ; j < 6 ; j++ )
//	{
//	dynamicArray[i][j]=i*j;
//	
//	}
//
//	for( int i = 0 ; i < 7 ; i++ )
//	{
//	for( int j = 0 ; j < 6 ; j++ )
//	{
//	
//	cout<<dynamicArray[i][j]<<" ";
//	}
//	cout<<endl;
//	}
//for( int i = 0 ; i < 7 ; i++ )
//delete [] dynamicArray[i] ;
//delete [] dynamicArray ;
//
//
//return 0;
//}