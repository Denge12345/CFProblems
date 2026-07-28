#include <bits/stdc++.h>
using namespace std;

void solve(){
    int h, m;
    scanf("%d:%d", &h, &m);
    if(h == 0){
        printf("12:%02d AM\n", m);
    }else if (h < 12){
        printf("%02d:%02d AM\n", h, m);
    }else if (h == 12){
        printf("12:%02d PM\n", m);
    }else{
        printf("%02d:%02d PM\n", h - 12, m);
    }
}

int main() {
    int t = 1;
    scanf("%d", &t);
    while(t--){
    	solve();	
	}
    return 0;
}