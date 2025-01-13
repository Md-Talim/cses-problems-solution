#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n;

    set<long long> unique_nums;

    for (int i = 0; i < n; i++) {
        cin >> x;
        unique_nums.insert(x);
    }

    cout << unique_nums.size();

    return 0;
}
