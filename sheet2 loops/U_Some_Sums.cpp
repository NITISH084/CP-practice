#include<bits/stdc++.h>
using namespace std;
bool checkSum(int i,int a,int b){
    long long sum=0;
    while(i){
        sum+=(i%10)*(1ll);
        i/=10;
    }
    if(sum>=a && sum<=b){
        return true;
    }
    return false;
}
void ans(int n,int a,int b){
    long long sum=0;
    for (int i = 1; i <= n; i++)
    {
        bool flag = checkSum(i,a,b);
        if(flag){
            sum+=i*1ll;
        }
        continue;
    }
   
        cout<<sum;
    
    
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    ans(n,a,b);
   
   
   return 0;}
   

