#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int minElement=min(x,y);
    int maxElement=max(x,y);
    while (minElement != 0) {
        int temp = minElement;
        minElement = maxElement % minElement;
        maxElement = temp;
    }
    cout<<maxElement;
   
   return 0;}
   


