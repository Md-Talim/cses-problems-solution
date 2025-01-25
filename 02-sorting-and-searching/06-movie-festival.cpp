#include <bits/stdc++.h>
#define nline '\n'
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long ll;

bool comparator(pair<ll, ll> a, pair<ll, ll> b) { return a.second < b.second; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<pair<ll, ll>> interval;

    for (ll i = 0; i < n; i++) {
        ll start, end;
        cin >> start >> end;
        interval.push_back({start, end});
    }

    sort(all(interval), comparator);

    int max_movies = 1, last_watch = interval[0].second;

    for (int i = 1; i < n; i++) {
        if (interval[i].first >= last_watch) {
            max_movies++;
            last_watch = interval[i].second;
        }
    }

    cout << max_movies;

    return 0;
}
