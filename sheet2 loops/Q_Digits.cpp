#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        reverse(x.begin(),x.end());
        for(auto it:x){
            cout<<it<<" ";
        }
        cout<<endl;
    }
   
   return 0;}
   

