#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;
int a[N];

void solve(){
	int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 0){
            int j = i;
            while(j + 1 <= n && a[j + 1] == 0) j++;
            ans = max(ans, j - i + 1);
            i = j;
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