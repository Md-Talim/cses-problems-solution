#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.length();
    int max_substring_length = 1;

    for (int i = 0; i < n; i++) {
        int substring_length = 1;

        while (s[i] == s[i + 1] && i < n) {
            substring_length++;
            i++;
        }

        max_substring_length = max(max_substring_length, substring_length);
    }

    cout << max_substring_length;

    return 0;
}
