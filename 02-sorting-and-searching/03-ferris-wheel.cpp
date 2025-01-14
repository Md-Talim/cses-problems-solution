#include <bits/stdc++.h>
#define nline '\n'
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for (int i = a; i < b; i++)
#define forn(i, n) for (int i = 0; i < n; i++)

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll child_count, max_weight;
    cin >> child_count >> max_weight;

    vector<int> child_weight(child_count);

    forn(i, child_count) { cin >> child_weight[i]; }
    sort(all(child_weight));

    ll low = 0, high = child_count - 1, min_gondolas = 0;

    while (low <= high) {
        if (child_weight[low] + child_weight[high] <= max_weight) {
            min_gondolas++;
            low++;
            high--;
        } else {
            min_gondolas++;
            high--;
        }
    }

    cout << min_gondolas;

    return 0;
}
