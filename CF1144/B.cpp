#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    vector<int> odd, even;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(x & 1) odd.push_back(x);
        else even.push_back(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    int o = odd.size(), e = even.size();
    if(abs(o - e) <= 1){
        cout << 0 << '\n';
        return;
    }
    ll ans = 0;
    if(o > e){
        for(int i = 0; i < o - e - 1; i++){
            ans += odd[i];
        }
    }else{
        for(int i = 0; i < e - o - 1; i++){
            ans += even[i];
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}