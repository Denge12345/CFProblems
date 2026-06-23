#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int h, m;
    scanf("%02d:%02d", &h, &m);
    int a; cin >> a;
    h += a / 60;
    m += a % 60;
    h += m / 60;
    m %= 60;
    h %= 24;
    printf("%02d:%02d", h, m); 
}

int main() {
    int t = 1;
    while(t--){
    	solve();
	}
    return 0;
}