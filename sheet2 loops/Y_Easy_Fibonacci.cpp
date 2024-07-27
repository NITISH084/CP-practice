#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if(t==1){
        cout<<"0 ";
    }
    if(t==2){
        cout<<"0  1";
    }

    if(t>2){
        int start=0;
        int end=1;
        cout<<"0 1 ";
        for (int i = 3; i <= t; i++)
        {   int sum=start+end;
            cout<<sum<<" ";
            start=end;
            end=sum;
        }
    }

    cout << endl;
    return 0;
}
