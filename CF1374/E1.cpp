#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k; cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> alice, bob, anb;
    for(int i = 1; i <= n; i++){
        int t, a, b; cin >> t >> a >> b;
        if(a == 1 && b == 1){
            anb.push(t);
        }else if(a == 1){
            alice.push(t);
        }else if(b == 1){
            bob.push(t);
        }
    }
    ll ans = 0, cnta = 0, cntb = 0;
    while(cnta < k || cntb < k){
        bool both = !anb.empty();
        bool comb = !alice.empty() && !bob.empty();
        if(!both && !comb) break;
        if(both && comb){
            int a = alice.top();
            int b = bob.top();
            int bo = anb.top();
            if(a + b < bo){
                ans += (a + b);
                alice.pop();
                bob.pop();
            }else{
                ans += bo;
                anb.pop();
            }
        }else if(both){
            ans += anb.top();
            anb.pop();
        }else{
            ans += (alice.top() + bob.top());
            alice.pop();
            bob.pop();
        }
        cnta++, cntb++;
    }
    if(cnta == k && cntb == k){
        cout << ans << '\n';
    }else{
        cout << -1 << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}