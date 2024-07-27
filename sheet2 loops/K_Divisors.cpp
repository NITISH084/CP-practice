#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n){
    vector <int> arr;
    for(int i=1;i*i<=n;i++){
        int rem=n/i;
        if(n%i==0){
            arr.push_back(i);
        }
        if(n%rem==0 && rem!=i){
            arr.push_back(rem);
        }
        continue;
    }
    sort(arr.begin(),arr.end());
    for(auto it :arr){
        cout<<it<<endl;
    }
}
int main(){
    int t;
    cin>>t;
   printDivisors(t);
   
   return 0;}
   

