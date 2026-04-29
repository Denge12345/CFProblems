#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m; cin >> n >> m;
    map<ll, int> dist;
    dist[n] = 0;
    queue<ll> q;
    q.push(n);
    while(!q.empty()){
        ll cur = q.front();
        q.pop();
        if(cur == m){
            cout << dist[cur] << '\n';
            return;
        }
        if(2 * cur <= m){
            q.push(2 * cur);
            dist[2 * cur] = dist[cur] + 1;
        }
        if(3 * cur <= m){
            q.push(3 * cur);
            dist[3 * cur] = dist[cur] + 1;
        }
    }
    cout << -1 << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}