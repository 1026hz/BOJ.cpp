#include <bits/stdc++.h>
using namespace std;

int pre[5001];
int nxt[5001];
vector<int> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, ans=0;
    stack<int> s;

    cin >> k;

    while(k--){
        int num;
        cin >> num;
        if (num == 0) s.pop();
        else s.push(num);
    }

    while (!s.empty()) {
        int tmp = s.top();
        ans += tmp;
        s.pop();
    }
    cout << ans;
}