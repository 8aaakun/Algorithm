#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tn;
    int arr[101] = {0, };
    cin >> tn;

    for (int i = 0; i < 1000; i++){
        int a;
        cin >> a;
        arr[a]++;
    }

    int max = 0;
    int maxIdx;
    for (int i = 0; i < 101; i++)
    {
        if(arr[i]>=max){
            max = arr[i];
            maxIdx = i;
        }
    }

    cout << maxIdx << endl;
}