#include <bits/stdc++.h>
using namespace std;

void f(int num, int& n1, int& n2){
    int bit = 0;
    while(num){
        if(num & 1){
            n1 |= (1 << bit);
            n2 |= (1 << bit);
        }
        num >>= 1;
        bit++;
    }
}

void solve(){
    int x, y, z; cin >> x >> y >> z;
    int a = 0, b = 0, c = 0, bit = 0;
    f(x, a, b);
    f(y, b, c);
    f(z, a, c);
    if((a & b) == x && (b & c) == y && (a & c) == z){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }
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