#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int max_num = 0;
    int max_index = 0;

    for(int i=1; i<10; i++) {
        int n;
        cin >> n;
        
        if (n >= max_num){
            max_num = n;
            max_index = i;
        }

    }

    cout << max_num << '\n' << max_index;

}