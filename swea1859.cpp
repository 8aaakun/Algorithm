#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    deque<int> dq;
    
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        dq.push_back(input);
    }

    long res = 0;
    int max = dq.back();
    dq.pop_back();

    while(!dq.empty()){
        int cur = dq.back();
        dq.pop_back();
        
        if(cur < max){
            res += max - cur;
        }
        else{
            max = cur;
        }
    }

    cout << res << endl;
}