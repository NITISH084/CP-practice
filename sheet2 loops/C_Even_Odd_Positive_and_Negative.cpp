#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
        int a,even=0,odd=0,positive=0,negative=0;
    while(t--){
        cin>>a;
        if(a==0){
            even++;
        }
        else if(a>0 && a!=0){
            positive++;
            if(a%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        else if(a!=0){
            negative++;
            if(a%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

    }
   cout<<"Even: "<<even<<endl;
cout<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<positive<<endl;
cout<<"Negative: "<<negative<<endl;
   return 0;}
   

