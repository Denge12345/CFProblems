#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int cnt[N], w[N];

void init(){
    for(int i = 1; i <= 2e5; i++){
        int x = i, c = 0;
        while(x){
            if(x >= 3){
                x /= 3;
                c++;
            }else{
                break;
            }
        }
        w[i] = c + 1;
    }
    for(int i = 1; i <= 2e5; i++){
        cnt[i] = cnt[i - 1] + w[i];
    }
}

void solve(){
	int l, r; cin >> l >> r;
    cout << cnt[r] - cnt[l - 1] + w[l] << '\n';
}

int main() {
    init();
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
    	solve();	
	}
    return 0;
}