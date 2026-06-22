#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 9;
int a[N];

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> ans;
    map<int, int> cnt;
    for(int i = 1, lst = 1; i <= n; i++){
        int x; cin >> x;
        cnt[x]++;
        if(cnt[x] == 2){
            ans.push_back({lst, i});
            lst = i + 1;
            cnt.clear();
        }
    }
    if(!cnt.empty() && !ans.empty()){
        ans.back().second = n;
    }
    if(ans.size() == 0){
        cout << -1 << '\n';
    }else{
        cout << ans.size() << '\n';
        for(const auto& [l, r] : ans){
            cout << l << ' ' << r << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();
	}
    return 0;
}