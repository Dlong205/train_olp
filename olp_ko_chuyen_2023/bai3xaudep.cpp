#include <bits/stdc++.h>
//#include <iosteam>

using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
 bool ham(int n){
        return n==5;
    }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector <int> a = {1,2,3,4,5};
    cout << find_if(begin(a), end(a), ham) - begin(a);
   

    return 0;
}
