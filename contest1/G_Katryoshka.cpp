#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,m,k;
  cin>>n>>m>>k;
    if(n==0){
        cout<<0;
    }
    else if(n==1){
        cout<<1;
    }
    else if(n>1){
       long long minElement=min( n , min(k,m) ),ans=0;
       if(minElement==m){
        if( (n-m)/2 > (k-m) ){
        ans=m+(k-m);
       }
       else{
        ans=m+(n-m)/2;
       }
    cout<<ans;
       
       }
       if(minElement==n){
         cout<<n;       
       }
       if (minElement==k)
       {
         cout<<k;
       }
       

    }
   
   return 0;}
   




// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.