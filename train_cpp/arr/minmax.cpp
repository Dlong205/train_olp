#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<double> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << fixed << setprecision(3) << "Min = " << v[0] << '\n';
    cout << fixed << setprecision(3) << "Max = " << v[n-1];
    return 0;
}
