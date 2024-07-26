#include<bits/stdc++.h>
using namespace std;
int main(){
        int x, y;
        char ch;
        cin>>x>>ch>>y;
        switch (ch)
        {
        case '>':
            if(x>y){
                cout<<"Right"<<endl;
            }
            else{
                cout<<"Wrong"<<endl;
            }
            break;
        case '<':
            if(x<y){
                cout<<"Right"<<endl;
            }
            else{
                cout<<"Wrong"<<endl;
            }
            break;
        case '=':
            if(x==y){
                cout<<"Right"<<endl;
            }
            else{
                cout<<"Wrong"<<endl;
            }
            break;
        
        default:
            break;
        }
   
   return 0;}
   

