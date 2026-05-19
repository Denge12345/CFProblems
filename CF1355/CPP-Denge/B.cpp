#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    map<int, int> cnt;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        cnt[x]++;
    }
    int ans = 0;
    for(auto& [x, c] : cnt){
        ans += (c / x);
        c -= x * (c / x);
    }
    vector<int> arr;
    for(const auto& [x, c] : cnt){
        for(int i = 1; i <= c; i++){
            arr.push_back(x);
        }
    }
    //2 3 4 4 5
    for(int i = 0, c = 1; i < arr.size(); i++, c++){
        if(c == arr[i]){
            ans++;
            c = 0;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}