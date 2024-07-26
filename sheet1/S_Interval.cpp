#include<bits/stdc++.h>
using namespace std;
int main(){
    float t;
    cin>>t;
    if(t>=0 && t<=25){
        cout<<"Interval [0,25]"<<endl;
    }
    else if(t>25 && t<=50){
        cout<<"Interval (25,50]"<<endl;
    }
    else if(t>50 && t<=75){
        cout<<"Interval (50,75]"<<endl;
    }
    else if(t>75 && t<=105){
        cout<<"Interval (75,100]"<<endl;
    }
    else{
        cout<<"Out of Intervals"<<endl;
    }
   
   return 0;}
   

