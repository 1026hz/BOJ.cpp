#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int h, m;
    cin >> h >> m;

    int rh=h, rm=m;

    rm -= 45;

    if (rm < 0){
        rh -= 1;
        rm = 60 + rm;
    }

    if (rh < 0){
        rh = 24 + rh;
    }

     cout << rh << ' ' << rm;

}