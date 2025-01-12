#include <bits/stdc++.h>
using namespace std;

bool is_even(long long n) { return (n % 2 == 0); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long row, col;
        cin >> row >> col;

        long long max_num = max(row, col);
        long long middle = max_num * max_num - (max_num - 1LL);

        if (is_even(max_num))
            cout << (middle - (col - row)) << "\n";
        else
            cout << (middle - (row - col)) << "\n";
    }

    return 0;
}
