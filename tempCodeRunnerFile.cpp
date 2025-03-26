#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    int res = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        pq.push(a);
    }

    for (int i = 0; i < m; i++){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int r = a + b;
        pq.push(r);
        pq.push(r);
    }
    
    while(!pq.empty()){
        res += pq.top();
        pq.pop();
    }
    cout << res << endl;
    
    return 0;
}