#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    int cnt2 = 0, cnt3 = 0;
    while(n % 2 == 0){
        n /= 2;
        cnt2++;
    }
    while(n % 3 == 0){
        n /= 3;
        cnt3++;
    }
    if(n != 1 || cnt2 > cnt3){
        cout << -1 << '\n';
    }else{
        cout << 2 * cnt3 - cnt2 << '\n';
    }
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