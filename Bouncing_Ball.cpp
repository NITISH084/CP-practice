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
        ll n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> left(n, -1), right(n, -1);
        
        // Precompute nearest non-zero to the left
        int last_non_zero = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                last_non_zero = arr[i];
            }
            left[i] = last_non_zero;
        }

        // Precompute nearest non-zero to the right
        last_non_zero = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] != 0) {
                last_non_zero = arr[i];
            }
            right[i] = last_non_zero;
        }

        int count = 0;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] == 0) {
                if (left[i] != -1 && right[i] != -1) {
                    if (left[i] != right[i]) {
                        count++;
                    } else {
                        count += 2;
                    }
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
