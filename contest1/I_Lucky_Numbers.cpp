#include<bits/stdc++.h>
using namespace std;
int main(){
   string t;
   cin>>t;
   int a=t[0]-'0';
   int b=t[1]-'0';
   if(a==0 || b==0){
    cout<<"YES"<<endl;
   }
   else if(a%b==0 || b%a==0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   
   return 0;}
   

