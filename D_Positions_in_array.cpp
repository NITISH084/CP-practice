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
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        ll x;
        cin >> x;
        if(x<=10){
            cout<<"A["<<i<<"] = "<<x<<endl;
        }
    }
    return 0;
}