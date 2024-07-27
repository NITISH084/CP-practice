#include<bits/stdc++.h>
using namespace std;
int checkLucky(string x){
    int flag=0;
    for(char ch : x){
        int num=ch-'0';
        if(num==4 || num==7){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<x<<" ";
    }
    return flag;
}
void initialize (int x,int y){
    int flag=0;
    for(int i=x;i<=y;i++){
        int returnValue =checkLucky(to_string(i));
        flag+=returnValue;
    }
    if(flag==0){
        cout<<"-1";
    }

}
int main(){
    int x,y;
    cin>>x>>y;
    initialize(x,y);
   return 0;}
   

