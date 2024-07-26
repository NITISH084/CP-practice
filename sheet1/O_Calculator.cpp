#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,ans;
   char ch;
   cin>>a>>ch>>b;
    switch (ch)
    {
    case '+':
        ans=a+b;
        break;
    case '-':
        ans=a-b;
        break;
    case '*':
        ans=a*b;
        break;
    case '/':
        ans=a/b;
        break;
    
    default:
        break;
    }
    cout<<ans<<endl;
   
   return 0;}
   

