#include<bits/stdc++.h>
using namespace std;
int main(){
   long long a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a<c){
    if(b>=c && b<d){
        cout<<c<<" "<<b<<endl;
    }
    else if(b>=c && b>=d){
        cout<<c<<" "<<d<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
   }
   if(a>=c){
    if(a<=d){
        cout<<a<<" ";
        if(d<b){
            cout<<d<<endl;
        }
        else if(d>=b){
            cout<<b<<endl;
        }
    }
    else{
        cout<<"-1"<<endl;
    }
   }

   
   
   return 0;}
   

