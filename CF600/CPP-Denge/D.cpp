#include <bits/stdc++.h>
using namespace std;
using lld = long double;

lld f(lld r1, lld r2, lld d){
    // 外切或相离
    if(d >= r1 + r2) return 0;
    // 内切或内含
    if(d <= abs(r1 - r2)){
        lld r = min(r1, r2);
        return acos(-1.0L) * r * r;
    }
    // 相交
    lld angle1 = acos((r1 * r1 + d * d - r2 * r2) / (2.0L * r1 * d));
    lld angle2 = acos((r2 * r2 + d * d - r1 * r1) / (2.0L * r2 * d));
    lld s1 = angle1 * r1 * r1 - r1 * r1 * sin(2.0L * angle1) / 2.0L;
    lld s2 = angle2 * r2 * r2 - r2 * r2 * sin(2.0L * angle2) / 2.0L;
    return s1 + s2;
}

void solve(){
	lld x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    // 两圆心距离
    lld d = hypotl(x1 - x2, y1 - y2);
    cout << fixed << setprecision(20) << f(r1, r2, d) << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();	
	}
    return 0;
}