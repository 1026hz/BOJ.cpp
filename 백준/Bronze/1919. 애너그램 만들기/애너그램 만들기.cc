#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    //꼭 초기화를 해주자
    int word[2][26] = {};
    int res=0; 
    
    string s1, s2;

    cin >> s1 >> s2;

    for(char c : s1)
        word[0][c-'a']++;

    for(char c : s2)
        word[1][c-'a']++;

    for(int i=0; i<26; i++)
        res += abs(word[0][i]-word[1][i]);
    
    cout << res;
}