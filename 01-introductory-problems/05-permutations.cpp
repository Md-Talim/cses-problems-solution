#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = n - 1; i >= 1; i -= 2) {
        cout << i << " ";
    }
    for (int i = n; i >= 1; i -= 2) {
        cout << i << " ";
    }

    return 0;
}
