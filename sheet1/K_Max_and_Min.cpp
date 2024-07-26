#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int maxelement = max(x,max(y,z));
    int minelement = min(x,min(y,z));
    cout<<minelement<<" "<<maxelement<<endl;
    
   
   return 0;}
   

