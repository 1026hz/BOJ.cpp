#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int cnt = 0;
    bool flag = true;
    getline(cin, s);
    
    for (int i=0; i<s.size(); i++){
        if (s[i] == ' ') flag = true;
        if (flag == true && s[i]!= ' '){
            cnt += 1;
            flag = false;
        }

    }

    cout << cnt;

}