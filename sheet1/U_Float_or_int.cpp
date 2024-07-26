#include<bits/stdc++.h>
using namespace std;
int main(){
    double t;
    cin>>t;
    if(t==(int)t){
        cout<<"int "<<(int)t<<endl;
    }
    else{
        double dec= t-(int)t;
        cout<<"float "<<(int)t<<" "<<dec<<endl;
    }
    
   
   return 0;}
   

