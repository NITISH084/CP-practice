#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int year=t/365;
    int rem_month=t%365;
    int month=rem_month/30;
    int rem_day=rem_month%30;
    int day=rem_day;
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<day<<" days"<<endl;
   
   return 0;}
   

