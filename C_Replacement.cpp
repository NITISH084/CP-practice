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
    int arr[t],count=0;
    while (t--) {
        ll x;
        cin >> x;
        if(x>0){
        arr[count]=1;
        }
        else if(x<0){
        arr[count]=2;
        }
        else{
        arr[count]=0;
        }
        count++;
    
    }
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}