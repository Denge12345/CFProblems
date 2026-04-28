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
        vector<int> arr;
        for(const auto& i : cnt){
            arr.push_back(i.second);
        }
        sort(arr.begin(), arr.end());
        // 下一次可以取 < nextTake 的
        ll ans = arr.back(), nextTake = arr.back();
        for(int i = arr.size() - 2; i >= 0; i--){
            if(arr[i] > nextTake){
                ans += nextTake - 1;
                nextTake--;
            }else if(arr[i] < nextTake){
                ans += arr[i];
                nextTake = arr[i];
            }
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