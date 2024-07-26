#include <bits/stdc++.h>
using namespace std;

long long maxPetals(int n, long long m, vector<int>& petals) {
    sort(petals.begin(), petals.end());
    
    long long maxPetals = 0;
    long long currentSum = 0;
    int start = 0;

    for (int end = 0; end < n; ++end) {
        currentSum += petals[end];

        // Ensure that the window is valid
        while (petals[end] - petals[start] > 1) {
            currentSum -= petals[start];
            ++start;
        }

        // Check if the current window is within the budget
        if (currentSum <= m) {
            maxPetals = max(maxPetals, currentSum);
        }
    }
    
    return maxPetals;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        
        vector<int> petals(n);
        for (int i = 0; i < n; ++i) {
            cin >> petals[i];
        }
        
        cout << maxPetals(n, m, petals) << endl;
    }
    
    return 0;
}
