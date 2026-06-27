#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int maxDist = 0;
    for(char c : s){
        maxDist += max(c - 'a', 'z' - c);
    }
    if(maxDist < k){
        cout << -1 << '\n';
        return;
    }
    string ans = s;
    for(int i = 0; i < n && k; i++){
        int toA = ans[i] - 'a';
        int toZ = 'z' - ans[i];
        if(toA > toZ){
            int d = min(k, toA);
            ans[i] -= d;
            k -= d;
        }else{
            int d = min(k, toZ);
            ans[i] += d;
            k -= d;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();
	}
    return 0;
}