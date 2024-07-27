#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        long long factorial=1ll;
        for(int i=1;i<=x;i++){
            factorial*=i;
        }
        if(x==0){
            cout<<1<<endl;
        }
        else{

        cout<<factorial<<endl;
        }
    }
   
   return 0;}
   

