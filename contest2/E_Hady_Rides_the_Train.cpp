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
    ll t;
    cin >> t;
    ll i = (t)/4 ; 
        if(i%2==0){
            ll j = 8*(i/2);
            cout<<i<<" "<<t-j;
                
        }
        else{
            ll j = (8*(i/2))+7; 
            cout<<i<<" "<<j-t;
        }
    
    return 0;
}