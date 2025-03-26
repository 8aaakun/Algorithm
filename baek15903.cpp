#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m;
    long long res = 0;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        long long a;
        cin >> a;
        pq.push(a);
    }

    for (int i = 0; i < m; i++){
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        long long r = a + b;
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