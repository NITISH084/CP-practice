#include<bits/stdc++.h>
using namespace std;
int main(){
   
    long long x ,z,ans;
    char y,ch;
    cin>>x>>y>>z>>ch>>ans;
    switch (y)
    {
    case '+':
        if(x+z==ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<x+z;
        }
        break;
    case '-':
        if(x-z==ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<x-z;
        }
        break;
    case '*':
        if(x*z==ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<x*z;
        }
        break;
    
    default:
        break;
    }
   
   return 0;}
   

