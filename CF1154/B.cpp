#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end()); 
    n = a.size();
    if(n > 3){
        cout << -1 << '\n';
    }else if(n == 3){
        if(a[2] - a[1] == a[1] - a[0]){
            cout << a[1] - a[0] << '\n';
        }else{
            cout << -1 << '\n';
        }
    }else if(n == 2){
        int d = a[1] - a[0];
        cout << (d % 2 == 0 ? d / 2 : d) << '\n';
    }else{
        cout << 0 << '\n';
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