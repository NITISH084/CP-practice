#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, s, count = 0;
    cin >> k >> s;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (s - (i + j) <= k && s >= (i + j))
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
