#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    set<string> st;
    queue<string> q;
    q.push(s);
    st.insert(s);
    int ans = 0;
    while(!q.empty() && st.size() < k){
        string cur = q.front();
        q.pop();
        for(int i = 0; i < cur.size(); i++){
            string ns = cur;
            ns.erase(i, 1);
            if(st.count(ns) || st.size() + 1 > k) continue;
            st.insert(ns);
            q.push(ns);
            ans += (n - ns.size());
        }
    }
    cout << (st.size() < k ? -1 : ans) << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}