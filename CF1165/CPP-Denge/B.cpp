#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];

void solve(){
	int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] >= ans + 1){
            ans++;
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