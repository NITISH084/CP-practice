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
    
    ll x, y,z,count=0;
    cin >> x >> y>>z;
    if(x!=5){
        count=5-x;
    }
    if(y!=5){
        count+=(5-y);
    }
    if(z!=5){
        count+=(5-z);
    }

      cout<<count;
    
    return 0;
}