#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a;
    cin >> n >> k >> a;
    long long num= n*(k*1ll);
    long long deno= (a*1ll);
    long double ans = (num*1.0)/deno;
    if(floor(ans)==ans){
        if(ans<=2147483647 && ans>= -2147483648){
         cout<<"int"<<endl;
        }
        else{
        cout<<"long long"<<endl;
        }
    }
    else{
        cout<<"double"<<endl;
    }
   return 0;}
   

