#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,m,k;
  cin>>n>>m>>k;

    
       long long minElement=min( n , min(k,m) ),ans=0;
       if(minElement==m){
        if( (n-m) >= (k-m) ){
        ans=m+(n-m)/2;
       }
       else if( (n-m) < (k-m) ){
        ans=m+(n-m)/2;
       }
       else{
        ans=m;
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
       

    
   
   return 0;}
   
// 1-Two eyes and a body.

// 2-Two eyes, mouth and a body.

// 3-Eye, mouth and a body.



// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.
   

