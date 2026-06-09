#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mod = 676767677;
const int N = 105;
int a[N];

void solve(){
	int n; cin >> n;
    bool hasOne = false;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) {
            hasOne = true;
        } else {
            ans = (ans + a[i]) % mod;
        }
    }
    if(hasOne){
        ans = (ans + 1) % mod;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
    	solve();	
	}
    return 0;
}