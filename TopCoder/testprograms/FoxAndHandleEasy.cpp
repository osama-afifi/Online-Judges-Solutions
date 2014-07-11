#include<iostream>
#include<string>
using namespace std;
class FoxAndHandleEasy
{
public:
string isPossible(string S, string T)
{
int pos=T.find(S);
if(pos==-1)return"No";
else
{
T.erase(pos,S.length());
if(T==S)
return "Yes";
else
return "No";

}
}
};
