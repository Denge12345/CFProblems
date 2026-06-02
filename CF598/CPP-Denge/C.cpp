#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct point {
    int x, y, id;
    long double angle;
};

const long double PI = acos(-1.0);
const int N = 1e5 + 9;
point a[N];

void solve(){
	int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i].x >> a[i].y;
        a[i].id = i;
        a[i].angle = atan2(a[i].y, a[i].x);
        if(a[i].angle < 0) a[i].angle += 2 * PI;
    }
    sort(a + 1, a + n + 1, [](point &p1, point &p2){
        return p1.angle < p2.angle;
    });
    long double ans = a[1].angle - a[n].angle + 2 * PI;
    int p1 = a[n].id, p2 = a[1].id;
    for(int i = 2; i <= n; i++){
        if(a[i].angle - a[i - 1].angle < ans){
            ans = a[i].angle - a[i - 1].angle;
            p1 = a[i - 1].id;
            p2 = a[i].id;
        }
    }
    cout << p1 << ' ' << p2 << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}