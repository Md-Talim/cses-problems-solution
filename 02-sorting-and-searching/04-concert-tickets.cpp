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

    ll tickets, customers;
    cin >> tickets >> customers;

    ll budget, price;
    set<pair<ll, ll>> sorted_prices;

    forn(i, tickets) {
        cin >> price;
        sorted_prices.insert({price, i});
    }

    forn(i, customers) {
        cin >> budget;

        auto it = sorted_prices.lower_bound({budget + 1, 0});
        if (it != sorted_prices.begin()) {
            --it;
            cout << (*it).first << nline;
            sorted_prices.erase(it);
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}
