#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
bool a[2 * N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        a[i + n] = a[i];
    }
    int ans = 0;
    for(int l = 1; l <= 2 * n; ){
        if(a[l] != 1){
            l++;
        }else{
            int r = l;
            while(r + 1 <= 2 * n && a[r + 1] == 1) r++;
            ans = max(ans, r - l + 1);
            l = r + 1;
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