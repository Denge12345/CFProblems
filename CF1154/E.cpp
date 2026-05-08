#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int a[N], ans[N], pos[N], L[N], R[N];

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) pos[a[i]] = i;
    for(int i = 1; i <= n; i++){
        L[i] = i - 1;
        R[i] = i + 1;
    }
    R[0] = 1, L[n + 1] = n;
    int cur = 1;
    for(int v = n; v >= 1; v--){
        int i = pos[v];
        if(ans[i] != 0) continue;
        int left = i, p = i;
        for(int j = 0; j < k; j++){
            p = L[p];
            if(p == 0) break;
            left = p;
        }
        int right = i, q = i;
        for(int j = 0; j < k; j++){
            q = R[q];
            if(q == n + 1) break;
            right = q;
        }
        int j = left;
        while(true){
            ans[j] = cur;
            if(j == right) break;
            j = R[j];
        }
        int ll = L[left], rr = R[right];
        R[ll] = rr, L[rr] = ll;
        cur = 3 - cur;
    }
    for(int i = 1; i <= n; i++) cout << ans[i];
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}