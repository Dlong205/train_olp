#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, h, khoang_cach;
    cin >> n >> h;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    
    ll max_sum = 0; // Biến lưu tổng lớn nhất
    
    for(ll i = 0; i < n; i++){
        ll sum = 0; // Khởi tạo sum = 0 cho mỗi vị trí i
        for(ll j = 0; j < n; j++){
            khoang_cach = 3 * abs(j - i);
            if(khoang_cach <= h) {
                sum += v[j];
            }
        }
        if(sum > max_sum) {
            max_sum = sum; // Cập nhật giá trị lớn nhất
        }
    }
    
    cout << max_sum;
    return 0;
}