#include <bits/stdc++.h>
using namespace std;

bool is_divisible_by_three(long long n) { return (n % 3 == 0); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long sum = a + b;
        long long min_value = min(a, b);
        long long max_value = max(a, b);
        long long max_half = max_value / 2LL;

        if ((min_value < max_half) or !is_divisible_by_three(sum)) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }

    return 0;
}
