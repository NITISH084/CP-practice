#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int mid=t/2;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j <t; j++){
            if(i==mid && j==mid){
            cout<<"X";
            }
            else if( j==i  )
            {
            cout<<"\\";
            }
           
            else if( j==t-i-1 ){
                  cout<<'/';
            }
            else{

            cout<<'*';
            }
        }
        cout<<endl;
    }
    
   
   return 0;}
   

