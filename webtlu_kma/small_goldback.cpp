#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
bool soNguyento(int n){
    if(n <=1) return false;
    else if(n==2) return true;
    else if(n%2==0) return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}
vector<int> timSonguyento(int start, int end){
    vector<int> vectorNguyento;
    for(int i=start ;i<=end;i++){
        if(soNguyento(i)){
            vectorNguyento.push_back(i);
        }
    }
    return vectorNguyento;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, dem = 0;
    cin >> n;
    //vector<int> vectorNguyento = timSonguyento(2, n);
    //for(int x : vectorNguyento){
    //   cout << x << " " ;
    //}
    vector<int> goldbach;
    if(n%2==0){
        for(int i=2; i<=n;i+=2){
            if((n-i)>=0){
                goldbach.push_back(2);
                dem++;
            }
        }
    }
    else if(n%2==1 && n >= 3){
        for(int i=2; i<= n; i+=2){
            if((n-i)>=3){
                goldbach.push_back(2);
                dem++;
            }
        }
        dem++;
        goldbach.push_back(3);
    }
    else {}
    cout << dem << '\n';
    for(int x: goldbach){
        cout << x << " ";
    }


    return 0;
}
