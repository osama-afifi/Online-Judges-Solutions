//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <vector>
//#include <math.h>
//#include <map>
//
//
//using namespace std;
//
//
//
//int const oo = 1<<25;
//int path[103][103];
//int sec[103][103];
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//	
//	return 0;
//}
//
//////#include <cstdlib>
//////#include <stdio.h>
//////#include <string.h>
////////#include <string>
////////#include <iostream>
////////#include <map>
////////#include <algorithm>
////////#include <functional>
//////#define Max 1000 + 5
//////#define INF 1000000000
////////#define INT_MAX 2147483647
//////#define FOR(i, N) for( int i = 0 ; i < N ; i++ )
//////#define FOR1e(i, N) for( int i = 1 ; i <= N ; i++ )
//////#define FORe(i, N) for(int i = 0 ; i <= N ; i++ )
//////#define FOR1(i, N) for(int i = 1 ; i < N ; i++ )
//////
////////using namespace std;
//////
//////int TestCases;
//////int NumberOfInfected1, NumberOfInfected2;
//////int Infected1[Max], Infected2[Max];
//////int C[Max], Prev[Max];
//////int Current, Pre, Result;
//////
//////int main(int argc, char** argv) {
//////    //freopen("Trojan.txt", "r", stdin);
//////    scanf("%d", &TestCases);
//////    
//////    while(TestCases--) {
//////        scanf("%d", &NumberOfInfected1);
//////        FOR(i, NumberOfInfected1)       scanf("%d", &Infected1[i]);
//////        scanf("%d", &NumberOfInfected2);
//////        FOR(i, NumberOfInfected2)       scanf("%d", &Infected2[i]);
//////        memset(C, NULL, sizeof(C));
//////        
//////        //2  3  5
//////        FOR(i, NumberOfInfected1) {
//////            Current = NULL;
//////            Pre    = 1;
//////            
//////            FOR(j, NumberOfInfected2) {
//////                if(Infected1[i] == Infected2[j] && Current >= C[j]) {
//////                    C[j] = Current + 1;
//////                    Prev[j] = Pre;
//////                }
//////                if(Infected1[i] > Infected2[j] && Current < C[j]) {
//////                    Current = C[j];
//////                    Pre = j;
//////                }
//////            }
//////        }
//////        Result = NULL;
//////        FOR(i, NumberOfInfected2) {
//////            if(C[i] > Result)
//////                Result = C[i];
//////            //Result = max(Result, C[i]);
//////        }
//////        printf("%d\n", Result);
//////       
//////    }
//////
//////    return 0;
//////}
