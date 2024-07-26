#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int used=0;
        if(k==0){
            used=0;
        }
        else if(k>n){
         for (int i = n; i > 0 && k>0; i--)
         {
            if(i==n){
                k=k-n;
                used++;
            }
            else{
                k=k-i;
                used++;
                if(k>0){
                    k=k-i;
                    used++;
                }
            }
         }
         
        }
        else{
            used++;
        }
        cout<<used<<endl;
    }
   
   return 0;}