#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, pair<string, int>>> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i].second.first >> p[i].second.second;
    }
    sort(p.begin(), p.end(), [](const auto& u, const auto& v){
        return u.second.second < v.second.second;
    });
    for(int i = 0; i < n; i++){
        if(p[i].second.second > i){
            cout << -1 << '\n';
            return;
        }
    }
    for(int i = 0; i < n; i++){
        p[i].first = n - i;
    }
    vector<pair<string, int>> ans;
    for(int i = 0; i < n; i++){
        ans.insert(ans.begin() + p[i].second.second, {p[i].second.first, p[i].first});
    }
    for(const auto& [name, h] : ans){
        cout << name << ' ' << h << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}