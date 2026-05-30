#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int a[N];

void solve(){
    int n; cin >> n;   
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    // 匹配边的周长, 匹配对的数量
    ll p = 0, cnt = 0;
    // 落单的边长度
    vector<ll> s;
    for(int i = 1; i <= n; ){
        int j = i;
        while(j <= n && a[j] == a[i]) j++;
        int c = j - i;
        cnt += c / 2;
        p += 2ll * (c / 2) * a[i];
        if(c & 1) s.push_back(a[i]);
        i = j;
    }
    ll ans = 0;
    if(cnt >= 2){
        ans = p;
    }
    // 找到最大的落单边 x 使得, x < p
    if(cnt >= 1 && !s.empty()){
        auto x = lower_bound(s.begin(), s.end(), p);
        if(x != s.begin()){
            x--;
            ans = max(ans, p + *x);
        }
    }
    // 枚举选择一条落单边 y, 找到最大的落单边 x, 使得 x < p + y
    if(cnt >= 1 && s.size() >= 2){
        for(int i = 0; i < s.size(); i++){
            ll y = s[i];
            ll t = y + p;
            auto x = lower_bound(s.begin(), s.end(), t);
            if(x != s.begin()){
                x--;
                if(x - s.begin() > i){
                    ans = max(ans, p + y + *x);
                }
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}