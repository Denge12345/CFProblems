#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int week[7] = {0, 1, 2, 0, 2, 1, 0};

void solve(){
    ll a, b, c; cin >> a >> b >> c;
    ll ans = 0;
    for(int w = 0; w < 7; w++){
        ll aa = a, bb = b, cc = c;
        ll weeks = min({aa / 3, bb / 2, cc / 2});
        aa -= weeks * 3, bb -= weeks * 2, cc -= weeks * 2;
        ll day = weeks * 7;
        for(int i = 0; i < 7; i++){
            int d = (w + i) % 7;
            if(week[d] == 0){
                if(!aa) break;
                aa--;
            }else if(week[d] == 1){
                if(!bb) break;
                bb--;
            }else{
                if(!cc) break;
                cc--;
            }
            day++;
        }
        ans = max(ans, day);
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