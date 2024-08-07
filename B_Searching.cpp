#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define ld long double
#define PI 3.141592653589793238462643383279502884L
#define MOD 1000000007
#define INF 1e18
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fast_io;
    int t,n;
    bool flag=false;
    cin >> t;
    n=t;
    int arr[t],count =0;
    while (t--) {
        cin>>arr[count];
        count++;
    }
    ll x;
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x){
            cout<<i<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<-1;
    }

    return 0;
}