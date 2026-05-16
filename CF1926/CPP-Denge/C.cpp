#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];

void init(){
    for(int i = 1; i <= 9; i++) a[i] = i;
    for(int i = 10; i <= 2e5; i++){
        int tmp = i, sum = 0;
        while(tmp){
            sum += tmp % 10;
            tmp /= 10;
        }
        a[i] = sum;
    }
    for(int i = 1; i <= 2e5; i++) a[i] += a[i - 1];
}

void solve(){
    int n; cin >> n;
    cout << a[n] << '\n';
}

int main() {
    init();
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
    	solve();	
	}
    return 0;
}