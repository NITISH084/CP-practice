#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    int ans1 = floor(a/b);
    int ans2 = ceil(a/b);
    int ans3 = round(a/b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<ans1<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ans2<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<ans3<<endl;
   
   return 0;}
   

