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
    int t,mini=INT_MAX,index=INT_MIN;
    cin >> t;
    for (int i=0;i<t;i++) {
        int x;
        cin >> x;
        int mino=min(mini,x);
        if(mini!=mino){
            mini=mino;
            index=i;
        }

    }
    cout<<mini<<" "<<index+1;
    return 0;
}