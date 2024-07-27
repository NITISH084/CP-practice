#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    for (int i = 1; i*i <= t; i++)
    {
        int multiple= t/(i);
        if(t%(i)==0 ){
            count++;
         
        }
        if ( t%multiple==0)
        {
            count++;
        }
        
    }
    if(count==2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
   
   return 0;}
   

