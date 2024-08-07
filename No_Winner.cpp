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
    while (t--) {
        int a,b,c,m;
        cin >> a >> b>>c>>m;
        int dif_a=abs(a-b);
        int dif_b=abs(b-c);
        int dif_c=abs(a-c);
        if(dif_a<=m||dif_b<=m||dif_c<=m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}