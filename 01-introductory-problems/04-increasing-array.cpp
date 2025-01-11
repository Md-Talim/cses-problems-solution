#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x, prev_num, moves = 0LL;
    cin >> n;

    cin >> x;
    prev_num = x;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x < prev_num) {
            moves += (prev_num - x);
        } else {
            prev_num = x;
        }
    }

    cout << moves;

    return 0;
}
