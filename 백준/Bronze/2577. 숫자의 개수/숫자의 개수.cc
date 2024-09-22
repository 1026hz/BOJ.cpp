#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    int cnt[10] = {};

    cin >> a >> b >> c;
    int n = a*b*c;

    while (n>0){
        cnt[n%10]++;
        n/=10;
    }

    for (int i=0; i<10; i++) cout << cnt[i] << "\n";

}