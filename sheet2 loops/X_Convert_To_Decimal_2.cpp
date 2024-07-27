#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int count=__builtin_popcount(x);
        int ans=0;
        for (int i = 0; i < count; i++)
        {
            int power = pow(2,i);
                ans+=power;
        }
        cout<<ans<<endl;
    }
   
   return 0;}
   

