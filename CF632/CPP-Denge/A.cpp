#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 55;
string s[N];

void solve(){
	int n, p; cin >> n >> p;
	for(int i = 1; i <= n; i++) cin >> s[i];
	double cnt = 0;
	for(int i = n; i >= 1; i--){
		if(s[i] == "halfplus"){
			cnt += 0.5, cnt *= 2;
		}else{
			cnt *= 2;
		}
	}
	ll ans = 0;
	for(int i = 1; i <= n; i++){
		if(s[i] == "halfplus"){
			ans += (cnt / 2) * p;
			cnt /= 2, cnt -= 0.5;
		}else{
			ans += (cnt / 2) * p;
			cnt /= 2;
		}
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