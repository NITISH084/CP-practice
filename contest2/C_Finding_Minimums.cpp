#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,count=1,mini=INT_MAX;
  cin>>n>>k;
  while(n--){
   
    int a;
    cin>>a;
    if(n==0){
        mini=min(mini,a);
        cout<<mini<<" ";
    }
    else if(count<k){
        mini=min(mini,a);
    count++;
    }
  
    else{
        mini=min(mini,a);
        cout<<mini<<" ";
        count=1;
        mini=INT_MAX;
    }
   
  }
   
   return 0;}
   

