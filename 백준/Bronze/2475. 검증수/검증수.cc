#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n1, n2, n3, n4, n5;

    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << (n1*n1 + n2*n2 + n3*n3 + n4*n4 + n5*n5)%10;

}