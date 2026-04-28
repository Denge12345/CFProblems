#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a; cin >> a;
    for(int i = a; i <= 1003; i++){
        int tmp = i, res = 0;
        while(tmp){
            res += tmp % 10;
            tmp /= 10;
        }
        if(res % 4 == 0){
            cout << i << '\n';
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}