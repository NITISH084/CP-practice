#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90){
        char ans= ch+32;
        cout<<ans<<endl;
    }
    else{
        char ans= ch-32;
        cout<<ans<<endl;
    }
   
   return 0;}
   

