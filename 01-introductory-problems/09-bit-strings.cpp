#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007LL;

long long calculate_bit_strings(long long n) {
    long long ans = 1LL;
    for (long long i = 1; i <= n; ++i) {
        ans = (ans % MOD * 2LL % MOD) % MOD;
    }

    return (ans % MOD);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    cout << calculate_bit_strings(n);

    return 0;
}
