#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N], cnt[N];

void solve(){
    int n; cin >> n;
    int maxCntPos = -1, maxCnt = 0, target = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        if(cnt[a[i]] > maxCnt){
            maxCnt = cnt[a[i]];
            target = a[i];
            maxCntPos = i;
        }
    }
    vector<pair<int, pair<int, int>>> ans;
    for(int i = maxCntPos + 1; i <= n; i++){
        if(a[i] > target){
            ans.push_back({2, {i, i - 1}});
        }else if(a[i] < target){
            ans.push_back({1, {i, i - 1}});
        }
    }
    for(int i = maxCntPos - 1; i >= 1; i--){
        if(a[i] > target){
            ans.push_back({2, {i, i + 1}});
        }else if(a[i] < target){
            ans.push_back({1, {i, i + 1}});
        }
    }
    cout << ans.size() << '\n';
    for(const auto& i : ans){
        cout << i.first << ' ' << i.second.first << ' ' << i.second.second << '\n';
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