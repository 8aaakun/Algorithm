#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[1005];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = 0;
    for (int i = 2; i < n - 2; i++)
    {
        int maxh = max(max(arr[i - 2], arr[i - 1]), max(arr[i+1], arr[i+2]));
        if(maxh < arr[i]){
            res += arr[i] - maxh;
        }
    }
    cout << res << endl;
}