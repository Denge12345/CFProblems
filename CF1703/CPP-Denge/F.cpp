#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int a[N], cnt[N], n;

int lowbit(int x){
    return x & -x;
}

void add(int i, int x){
    while(i <= n){
        cnt[i] += x;
        i += lowbit(i);
    }
}

ll query(int i){
    ll res = 0;
    while(i >= 1){
        res += cnt[i];
        i -= lowbit(i);
    }
    return res;
}

void solve(){
	cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    fill(cnt, cnt + 1 + n, 0);
    for(int i = 1; i <= n; i++){
        if(a[i] < i) add(i, 1);
    }
    ll ans = 0;
    for(int j = 1; j <= n; j++){
        if(a[j] < j){
            int b = a[j] - 1;
            if(b > n) b = n;
            if(b >= 1) ans += query(b);
        }
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