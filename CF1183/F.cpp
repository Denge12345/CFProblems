#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    set<int> st;
    int mx = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        mx = max(mx, x);
        st.insert(x);
    }
    int ans = 0;
    if(mx % 2 == 0 && mx % 3 == 0 && mx % 5 == 0){
        if(st.count(mx / 2) && st.count(mx / 3) && st.count(mx / 5)){
            ans = max(ans, mx / 2 + mx / 3 + mx / 5);
        }
    }
    vector<int> res;
    while(!st.empty() && res.size() < 3){
        int cur = *st.rbegin();
        st.erase(*st.rbegin());
        bool ok = 1;
        for(int x : res){
            if(x % cur == 0){
                ok = 0;
            }
        }
        if(ok){
            res.push_back(cur);
        }
    }
    ans = max(ans, accumulate(res.begin(), res.end(), 0));
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