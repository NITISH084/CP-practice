#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y,sum=0 ;
        cin>>x>>y;
        int minElement=min(x,y);
        int maxElement=max(x,y);
        for (int i = minElement+1; i < maxElement; i++)
        {
            if (i%2!=0)
            {
                sum+=i;
            }
            continue;
            
        }
        cout<<sum<<endl;
    }
   
   return 0;}
   

