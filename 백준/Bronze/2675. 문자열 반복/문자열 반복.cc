#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    while(n--){

        int r;
        string s;
        cin >> r >> s;

        for(char c : s){
            for(int j=0; j<r; j++) cout << c;
        }

        cout << '\n';

    }

}