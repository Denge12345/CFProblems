#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int a[N];

void solve(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    map<int, vector<int>> segL, segR;
    for(int l = 1, r = 1; r <= n; r++){
        while(r + 1 <= n && a[l] == a[r + 1]) r++;
        segL[a[l]].push_back(l);
        segR[a[r]].push_back(r);
        l = r + 1;
    }
    while(m--){
        int l, r, x;
        cin >> l >> r >> x;
        if(a[l] != x){
            cout << l << '\n';
            continue;
        }
        //找到是否存在一个区间[L, R]使得[l, r]被[L, R]包含
        int idx = upper_bound(segL[x].begin(), segL[x].end(), l) - segL[x].begin() - 1;
        if(segR[x][idx] >= r){
            cout << -1 << '\n';
        }else{
            cout << segR[x][idx] + 1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();
	}
    return 0;
}