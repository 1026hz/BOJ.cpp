#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int num[11] = {};
    cin >> n;

    while(n){
        num[n%10]++;
        n/=10;
    }

    while (abs(num[9]- num[6])>1){
        if (num[9] > num[6]){
            num[9]--;
            num[6]++;
        }
        else {
            num[6]--;
            num[9]++;
        }
    }

    // max_element 함수는 값을 리턴하지 않고 주소값을 반환해주므로 * 필수
    cout << *max_element(num, num+11);

}