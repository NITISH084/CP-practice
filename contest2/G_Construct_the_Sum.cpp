#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define ld long double
#define PI 3.141592653589793238462643383279502884L
#define MOD 1000000007
#define INF 1e18
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int res[100000];
int main() {
    fast_io;
    int t;
    cin >> t;
    long long cou=0;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        ll sum=(x+1)*x/2;
        if(sum<y){
            cout<<-1;
        }
        else{
            long long sum=0;
            for (int i = x; i >=1; i--)
            {
                if(sum+i<=y){
                    sum+=i;
                    res[cou]=i;
                    cou++;
                }
                if(sum==y){
                    break;
                }
            }
            
        }
        for (int o = 0; o < cou; o++)
        {
            cout<<res[o]<<" ";
        }
        cout<<endl;
        cou=0;
      
    }
    return 0;
}