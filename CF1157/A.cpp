#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    set<int> st;
    while(st.count(n) == 0){
        st.insert(n);
        n++;
        while(n % 10 == 0) n /= 10;
    }
    cout << st.size() << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}