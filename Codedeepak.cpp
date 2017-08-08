#include <bits/stdc++.h>
using namespace std;
void permute(string a,string b)
{  int i; 
    sort(a.begin(), a.end());
   do{ 
    i=b.find(a); 
    if(i>=0){
     cout<<"True";
     break;
    }}
 while (next_permutation(a.begin(),a.end()));
     if(i<0)
 cout<<"False";
}
int main()
{
    string s,t;
    cin>>s>>t;
    permute(t,s);
    return 0;
}
