#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate B * log(A) and D * log(C)
    double logA = log(A);
    double logC = log(C);

    double ans1 = B * logA;
    double ans2 = D * logC;

    // Compare the results
    if (ans1 > ans2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
