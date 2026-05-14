#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int a[N], b[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int m; cin >> m;
    for(int i = 1; i <= m; i++) cin >> b[i];
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + m);
    int i = 1, j = 1, ans = 0;
    while(i <= n && j <= m){
        if(abs(a[i] - b[j]) <= 1){
            ans++, i++, j++;
        }else{
            if(a[i] > b[j]) j++;
            else i++;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}