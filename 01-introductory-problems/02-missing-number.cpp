#include <bits/stdc++.h>
using namespace std;

long long total_sum(long long n) { return (n * (n + 1LL) / 2LL); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n;

    long long required_sum = total_sum(n);
    long long input_sum = 0LL;

    for (int i = 0; i < (int)n - 1; i++) {
        cin >> x;
        input_sum += x;
    }

    cout << (required_sum - input_sum);

    return 0;
}
