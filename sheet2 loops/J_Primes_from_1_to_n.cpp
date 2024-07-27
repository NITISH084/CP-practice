#include<bits/stdc++.h>
using namespace std;
void printPrime(int n){
        int count=0;
    for (int i = 1; i*i <=n; i++)
    {
        int rem=n/i;
        if(n%i==0){
            count++;
        }
        if(n%rem==0 && rem!=i){
            count++;
        }
    }
    if(count==2){
        cout<<n<<" " ;
        return;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        printPrime(i);
    }
   
   return 0;}
   

