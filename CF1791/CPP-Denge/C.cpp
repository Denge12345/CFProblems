#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    deque<char> deq;
    for(int i = 1; i <= n; i++){
        char c; cin >> c;
        deq.push_back(c);
    }
    while(!deq.empty()){
        char l = deq.front();
        char r = deq.back();
        if((l == '0' && r == '1') || (l == '1' && r == '0')){
            deq.pop_front();
            deq.pop_back();
        }else{
            break;
        }
    }
    cout << deq.size() << '\n';
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