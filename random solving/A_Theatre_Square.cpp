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

        ll n,m,a;
        cin >> n>>m>>a;
        ll height= (n+a-1)/a;
        ll widht= (m+a-1)/a;
        cout<<height*widht;
    
    return 0;
}