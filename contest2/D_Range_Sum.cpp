#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, y ;
        cin>>x>>y;
        long long start=min(x,y);
        long long end=max(x,y);
        long long multiplierStart=(start)*(start+1);
        long long multiplierEnd=(end)*(end+1);
        long long startSum=(multiplierStart)/(2);
        long long endSum=(multiplierEnd)/(2);
        long long ans=endSum-startSum+start;
        cout<<ans<<endl;
        
    }
   
   return 0;}
   
