#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N], n;

int check(int l, int r){
    set<int> st;
    for(int i = 0; i <= n; i++) st.insert(i);
    while(l >= 1 && r <= 2 * n && a[l] == a[r]){
        st.erase(a[l]);
        l--, r++;
    }
    return *st.begin();
}

void solve(){
    cin >> n;
    for(int i = 1; i <= 2 * n; i++) cin >> a[i];
    int x = -1, y = 0;
    for(int i = 1; i <= 2 * n; i++){
        if(a[i] == 0){
            if(x == -1) x = i;
            else y = i;
        }
    }
    cout << max({check(x, x), check(y, y), check((x + y) / 2, (x + y + 1) / 2)}) << '\n';
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