#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n, k; cin >> n >> k;
    string s; cin >> s;
    s = ' ' + s;
    set<char> st;
    for(int i = 1; i <= k; i++){
        char c; cin >> c;
        st.insert(c);
    }
    int l = 1;
    while(l <= n && !st.count(s[l])) l++;
    ll ans = 0;
    while(l <= n){
        int r = l;
        while(r + 1 <= n && st.count(s[r + 1])) r++;
        ll len = (r - l + 1);
        ans += (len * (len + 1) / 2);
        l = r + 1;
        while(l <= n && !st.count(s[l])) l++;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();	
	}
    return 0;
}