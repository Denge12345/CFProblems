#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int s[N];

void solve(){
    int n, a, b; cin >> n >> b >> a;
    for(int i = 1; i <= n; i++) cin >> s[i];
    int ans = 0, cura = a;
    for(int i = 1; i <= n; i++){
        if(cura == 0 && b == 0) break;
        if(s[i]){
            if(b > 0 && cura < a) b--, cura++;
            else if(cura > 0) cura--;
        }else{
            if(cura > 0) cura--;
            else if(b > 0) b--;
        }
        ans++;
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