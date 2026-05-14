#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 55;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    map<ll, vector<pair<int, int>>> cnt;
    for(int i = 1; i <= n; i++){
        ll sum = 0;
        for(int j = i; j <= n; j++){
            sum += a[j];
            cnt[sum].push_back({i, j});
        }
    }
    vector<pair<int, int>> ans;
    for(const auto& i : cnt){
        vector<pair<int, int>> tmp = i.second;
        sort(tmp.begin(), tmp.end(), [](const auto& x, const auto& y){
            return x.second < y.second;
        });
        vector<pair<int, int>> cur;
        int lst = 0;
        for(const auto& j : tmp){
            if(j.first > lst){
                cur.push_back({j.first, j.second});
                lst = j.second;
            }
        }
        if(cur.size() > ans.size()){
            ans = cur;
        }
    }
    cout << ans.size() << '\n';
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first << ' ' << ans[i].second << '\n';
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