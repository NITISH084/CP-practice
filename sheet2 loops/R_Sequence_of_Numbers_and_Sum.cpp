#include <iostream>
using namespace std;

int main() {
    int N, M;

    while (cin >> N >> M) {
   
        if (N <= 0 || M <= 0) {
            return 0;
        }

       
        int start = min(N, M);
        int end = max(N, M);
        long long sum = 0;


        for (int i = start; i <= end; ++i) {
            cout << i << " ";
            sum += i;
        }
        
        // Print the sum
        cout << "sum =" << sum << endl;
    }

    return 0;
}
