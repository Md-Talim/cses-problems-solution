#include <bits/stdc++.h>
using namespace std;

bool is_even(long long n) { return (n % 2 == 0); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.length();
    string palindrome = "";
    map<char, int> char_count_map;

    for (auto &ch : s) {
        char_count_map[ch]++;
    }

    pair<char, int> odd_char = {' ', 0};
    int odd_count = 0;

    for (auto &char_count : char_count_map) {
        if (!is_even(char_count.second)) {
            odd_count++;
            odd_char = char_count;
            continue;
        }

        string temp(char_count.second / 2, char_count.first);
        palindrome.append(temp);
    }

    if (is_even(n) and odd_count > 0) {
        cout << "NO SOLUTION";
        return 0;
    }

    if (!is_even(n) and (odd_count == 0 or odd_count > 1)) {
        cout << "NO SOLUTION";
        return 0;
    }

    string reverse_str = palindrome;
    reverse(reverse_str.begin(), reverse_str.end());

    if (odd_char.second >= 1) {
        string odd_str(odd_char.second, odd_char.first);
        palindrome.append(odd_str);
    }

    palindrome.append(reverse_str);
    cout << palindrome;

    return 0;
}
