#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        for (int s = 0; s <t-i-1 ; s++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
   
   return 0;}
   

