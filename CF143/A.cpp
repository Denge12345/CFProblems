#include <bits/stdc++.h>
using namespace std;

void solve(){
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int a, b, c, d;
    for(a = 1; a <= 9; a++){
        for(b = 1; b <= 9; b++){
            for(c = 1; c <= 9; c++){
                for(d = 1; d <= 9; d++){
                    if(a + b == r1 && c + d == r2 && a + c == c1 && b + d == c2 && a + d == d1 && b + c == d2){
                        if(a != b && a != c && a != d && b != c && b != d && c != d){
                            cout << a << ' ' << b << '\n';
                            cout << c << ' ' << d << '\n';
                            return;
                        }
                    }
                }
            }
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