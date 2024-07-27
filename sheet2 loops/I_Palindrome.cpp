#include<bits/stdc++.h>
using namespace std;
int main(){
    string t,s;
    cin>>t;
    s = t;
    reverse(s.begin(),s.end());
    if(t==s){
        cout<<t<<endl;
        cout<<"YES"<<endl;
    }
    else{
        while (s[0]=='0')
        {
            s.replace(0,1,"");
        }
        
         cout<<s<<endl;
        cout<<"NO"<<endl;
    }
    
   
   return 0;}
   

