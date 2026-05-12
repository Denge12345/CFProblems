#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int len = 1, ans = 0;
    for(int i = 2; i <= n; i++){
        if(a[i] >= a[i - 1]){
            len++;
        }else{
            ans = max(ans, len);
            len = 1;
        }
    }
    cout << max(ans, len) << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}