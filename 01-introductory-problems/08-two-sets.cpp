#include <bits/stdc++.h>
using namespace std;

bool is_even(long long n) { return (n % 2 == 0); }
long long calculate_sum(long long n) { return (n * (n + 1LL) / 2LL); }

void print_sequence(long long start, long long end) {
    for (long long i = start; i <= end; ++i) {
        cout << i << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long num;
    cin >> num;

    long long total_sum = calculate_sum(num);

    if (!is_even(total_sum)) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long half_num = num / 2LL;
    long long half_half_num = half_num / 2LL;

    bool is_num_even = is_even(num);
    long long start_second_half =
        is_num_even ? num - half_half_num + 1LL : num - half_half_num;
    long long end_first_half = start_second_half - 1LL;

    cout << half_num << '\n';
    print_sequence(1, half_half_num);
    print_sequence(start_second_half, num);
    cout << '\n';

    cout << (is_num_even ? half_num : half_num + 1) << '\n';
    print_sequence(half_half_num + 1, end_first_half);

    return 0;
}
