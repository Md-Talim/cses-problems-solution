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

    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n), b(m);
    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];

    sort(all(a));
    sort(all(b));

    ll ans = 0, i = 0, j = 0;
    while (i < n) {
        while (j < m and b[j] < a[i] - k) j++;

        if (abs(b[j] - a[i]) <= k) {
            ans++;
            i++;
            j++;
        } else {
            i++;
        }
    }

    cout << ans;

    return 0;
}
