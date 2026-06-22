#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

void solve(){
    int a, b; cin >> a >> b;
    ll ans = 0;
    for(int i = a; i <= b; i++){
        int tmp = i;
        while(tmp){
            ans += arr[tmp % 10];
            tmp /= 10;
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