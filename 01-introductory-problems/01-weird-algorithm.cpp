#include <bits/stdc++.h>
using namespace std;

bool is_even(long long n) { return (n % 2 == 0); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    while (n != 1) {
        cout << n << " ";

        if (is_even(n)) {
            n /= 2;
        } else {
            n = (n * 3LL) + 1;
        }
    }

    cout << n;

    return 0;
}
