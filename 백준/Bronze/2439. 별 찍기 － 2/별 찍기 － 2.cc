#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n=0;
    cin >> n;

    for(int i=1; i<=n; i++){
        
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << "*";
        }
        cout << '\n';

    }

}