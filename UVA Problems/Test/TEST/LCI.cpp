//
//
//
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n,p;
//	int arr[] = { 1, 9, 3, 8, 11, 4, 5, 6, 4, 19, 7, 1, 7 };
//
//
//	//////////////////////////////////////
//	vector <int> in;
//	vector <int> index_list;
//
//
//	for(int i = 0 ; i<13  ; i++)
//		in.push_back(arr[i]);
//	vector <int> linked_list(in.size());
//
//	index_list.push_back(0);
//
//	for(int i=1 ; i< in.size(); i++)
//	{
//		if(in[i]>in[index_list.back()] )
//		{
//			linked_list[i]=index_list.back();
//			index_list.push_back(i);
//			continue;
//		}
//
//		int beg=0;
//
//		for(int end=index_list.size()-1,mid=(beg+end)/2 ; beg<end ; mid=(beg+end)/2)
//			if(in[index_list[mid]]<in[i]) beg=mid+1;
//			else end=mid;
//
//			if(in[index_list[beg]]>in[i])
//			{
//				if(beg>0)linked_list[i]=index_list[beg-1];
//			index_list[beg]=i;
//			}
//
//	}
//
//	for (int i = index_list.size(), j = index_list.back(); i--; j=linked_list[j])
//		index_list[i] = j;
//
//	//////////////////////////////////////////////////////////////////////////
//
//	      
//	for (size_t i = 0; i < index_list.size(); i++)
//		printf("%d ", in[index_list[i]]);
//	       printf("\n");    
//
//	return 0;
//}
//
//
