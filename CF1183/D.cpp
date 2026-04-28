#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        map<int, int> cnt;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            cnt[x]++;
        }
        vector<ll> arr;
        for(const auto& i : cnt){
            arr.push_back(i.second);
        }
        sort(arr.begin(), arr.end());
        // 下一次可以取 <= nextTake 的
        //1 4 8 4 5 6 3 8
        //1 1 2 1 1 2
        ll ans = 0, nextTake = INT_MAX;
        for(int i = arr.size() - 1; i >= 0; i--){
            ans += min(arr[i], nextTake);
            if(nextTake <= arr[i]){
                nextTake--;
            }else{
                nextTake = arr[i] - 1;
            }
            if(nextTake == 0) break;
        }
        cout << ans << '\n';
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