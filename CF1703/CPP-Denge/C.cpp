#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int a[N];

void solve(){
	int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        int b; cin >> b;
        string op; cin >> op;
        for(char c : op){
            if(c == 'U'){
                if(--a[i] == -1) a[i] = 9;
            }else{
                if(++a[i] == 10) a[i] = 0;
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << a[i] << " \n"[i == n];
} 

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
    	solve();	
	}
    return 0;
}