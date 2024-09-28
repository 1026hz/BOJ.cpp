#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a=0, b=0;
    cin >> a >> b;
    if (a>b) cout << '>';
    else if (a<b) cout << '<';
    else if (a==b) cout << "==";

}