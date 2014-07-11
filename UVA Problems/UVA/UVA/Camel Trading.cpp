//#include<iostream>
//#include<string>
//#include<vector>
//#include<stack>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//
//		string text;
//		cin>>text;
//
//		vector<char>V;
//
//		int c=0;
//		while(c<text.length())
//		{
//			if(text[c]=='+' || text[c]=='*')
//				V.push_back(c++);
//			else
//			{
//				int num = text[c]-'0';
//				c++;
//				if(c<text.length() && isdigit(text[c]) ){
//					num+=text[c]*10;
//					c++;
//				}
//				V.push_back(num);
//			}
//		}
//
//		//Max
//		int maxi=0;
//		stack<int>S;
//		for(int i=0 ; i<V.size() ; i++)
//		{
//			if(V[i]!='+' && V[i]!='*' )
//				maxi+=V[i];
//			S.push(maxi);
//
//		}
//
//	}
//	return 0;
//}