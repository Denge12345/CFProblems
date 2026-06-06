#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;
int a[N];

void solve(){
	int n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a + 1, a + n + 1);
    ll ave = sum / n;
    ll rem = sum % n;
    ll ans = 0;
    for(int i = 1; i <= n - rem; i++){
        if(a[i] < ave) ans += ave - a[i];
    }
    for(int i = n - rem + 1; i <= n; i++){
        if(a[i] < ave + 1) ans += ave + 1 - a[i];
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