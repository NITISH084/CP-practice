#include<bits/stdc++.h>
using namespace std;
int main(){
   char x;
   cin>>x;
   int ascii = (int)x ;
   if(ascii>=65  && ascii <=90 ){
    cout<<"ALPHA" <<endl<<"IS CAPITAL"<<endl;
   }
    else if(ascii>=97  && ascii <=122 ){
    cout<<"ALPHA" <<endl<<"IS SMALL"<<endl;
   }
   else{
    cout<<"IS DIGIT"<<endl;
   }
   
   return 0;}
   

