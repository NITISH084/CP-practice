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
    int t,count=0;
    cin >> t;
    int arr_reverse[t]={0},arr[t];
    for (int i=0;i<t;i++) {
        cin>>arr[i];
        arr_reverse[t-i-1]=arr[i];
    }
    for (int j = 0; j < t; j++)
    {
        if(arr[j]!=arr_reverse[j]){
           cout<<"NO";
            return 0;
        }
    }
         cout<<"YES";
    
    return 0;
}