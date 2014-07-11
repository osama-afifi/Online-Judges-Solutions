////1239
////Greatest K-Palindrome Substring
////Dynamic Programming;Ad hoc
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cmath>
//#define MAX 1005
//using namespace std;
//
//int T[MAX][MAX];
//
//int main() {
//    int t; cin >> t; t=0;
//    string text;
//    int k;
//    while(cin >> text >> k) {
//        
//
//        int maxi=0;        
//		for(int i=text.length(); i>=1; i--) {
//            for(int j=i; j<=text.length(); j++) {
//				T[i][j] = T[i+1][j-1] + (text[i-1] == text[j-1] ? 0 : 1);
//
//                if (T[i][j] <= k)
//                    maxi = max(maxi, j-i+1);
//            }
//        }
//
//        cout << maxi << endl;
//    }
//    
//    return 0;
//}