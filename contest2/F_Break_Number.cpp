#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define PI 3.141592653589793238462643383279502884L
#define MOD 1000000007
#define INF 1e18
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fast_io;
    ll t,maxi=0;
    cin >> t;
    while (t--) {
        ll x,count=0;
        cin >> x;
        while(x%2==0){
            x/=2;
            count++;
            maxi=max(count,maxi);
        }
    }
    cout<<maxi;
    return 0;
}