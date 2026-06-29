#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 5e5 + 9;
int p[N];

void solve(){
	int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> p[i];
    string s; cin >> s;
    s = ' ' + s;
    ll alice = 0, bob = 0;
    for(int i = 1; i <= n; i++){
        if(s[i] == 'A') alice += p[i];
        else bob += p[i];
    }
    ll ans = bob, b = bob;
    for(int i = 1; i <= n; i++){
        if(s[i] == 'A') b += p[i];
        else b -= p[i];
        ans = max(ans, b);
    }
    b = bob;
    for(int i = n; i >= 1; i--){
        if(s[i] == 'A') b += p[i];
        else b -= p[i];
        ans = max(ans, b);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}