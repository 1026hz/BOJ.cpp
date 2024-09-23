#include <bits/stdc++.h>
using namespace std;

int pre[5001];
int nxt[5001];
vector<int> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    stack<int> s;

    cin >> n;

    while(n--){
        string str;
        cin >> str;
        if (str == "push"){
            int t;
            cin >> t;
            s.push(t);
        }
        else if (str == "pop"){
            if (s.empty()) cout << -1 << "\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (str == "size"){
            cout << s.size() << "\n";
        }
        else if (str == "empty"){
            cout << (int)s.empty() << "\n";
        }
        else if (str == "top"){
            if (s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }
}