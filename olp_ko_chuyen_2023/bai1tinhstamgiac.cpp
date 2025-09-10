#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll u, v;
    cin >> u >> v;
    cout << fixed << setprecision(2) << 0.25 * (u*u+v*v);
    return 0;
}
