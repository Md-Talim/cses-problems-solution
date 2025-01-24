#include <bits/stdc++.h>
#define nline '\n'
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for (int i = a; i < b; i++)
#define forn(i, n) for (int i = 0; i < n; i++)

using namespace std;
typedef long long ll;

bool comparator(pair<ll, ll> a, pair<ll, ll> b) {
    return (a.first == b.first) ? a.second < b.second : a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<pair<ll, int>> events;

    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }

    sort(all(events), comparator);

    ll max_customers = 0, current_customers = 0;

    for (auto &event : events) {
        current_customers += event.second;
        max_customers = max(max_customers, current_customers);
    }

    cout << max_customers;

    return 0;
}
