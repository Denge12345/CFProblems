#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int mx = max({x1, x2, x3, x4});
    vector<int> arr;
    if(mx != x1) arr.push_back(x1);
    if(mx != x2) arr.push_back(x2);
    if(mx != x3) arr.push_back(x3);
    if(mx != x4) arr.push_back(x4);
    cout << mx - arr[0] << ' ' << mx - arr[1] << ' ' << mx - arr[2] << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}