#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,ans=1;
    bool flag =false;
    cin>>t;
    while(t--){
        if(ans%2==0){
        cout<<ans<<endl;
        flag=true;}
        ans++;
    }
   if(flag!=true){
    cout<<-1;
   }
   return 0;}
   

