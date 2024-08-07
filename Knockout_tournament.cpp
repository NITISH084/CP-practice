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
        int arr[16];
        int hash[16];
        unordered_map<int, int> hashing;

        for (int i = 0; i < 16; i++) {
            cin >> arr[i];
            hash[i] = arr[i];
        }

        sort(hash, hash + 16);

        for (int i = 0; i < 16; i++) {
            if (i == 0) {
                hashing[hash[i]] = 0;
            } else if (i == 15) {
                hashing[hash[i]] = 4;
            } else if (i > 0 && i < 3) {
                hashing[hash[i]] = 1;
            } else if (i > 2 && i < 7) {
                hashing[hash[i]] = 2;
            } else {
                hashing[hash[i]] = 3;
            }
        }

        for (int i = 0; i < 16; i++) {
            cout << hashing[arr[i]] << " ";
        }
        cout << endl;
    }

    return 0;
}
