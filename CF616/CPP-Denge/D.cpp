#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 9;
const int M = 1e6 + 9;
int a[N], cnt[M];

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int kind = 0, maxLen = 0, ansl = 1, ansr = 1;
    for(int l = 1, r = 1; r <= n; r++){
        if(cnt[a[r]] == 0) kind++;
        cnt[a[r]]++;
        while(kind > k){
            if(--cnt[a[l]] == 0) kind--;
            l++;
        }
        int len = r - l + 1;
        if(len > maxLen){
            maxLen = len;
            ansl = l, ansr = r;
        }
    }
    cout << ansl << ' ' << ansr << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();	
	}
    return 0;
}