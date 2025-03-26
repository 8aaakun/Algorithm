#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int map[101][101];
    int d[101][101];
    
    
    deque<pair<int, int>> dq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        for (int j = 0; j < n; j++){
            map[i][j] = s[j] - '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            d[i][j] = INT_MAX;
        }
    }

    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {1, 0, 0, -1};

    d[0][0] = map[0][0];
    dq.push_back({0, 0});
    
    while(!dq.empty()){
        int curx = dq.front().second;
        int cury = dq.front().first;
        dq.pop_front();

        for (int i = 0; i < 4; i++){
            int nx = curx + dx[i];
            int ny = cury + dy[i];
            
            if(nx >= 0 && ny>=0 && nx<n && ny<n){
                if(d[ny][nx] > d[cury][curx] + map[ny][nx]){
                    d[ny][nx] = d[cury][curx] + map[ny][nx];
                    dq.push_back({ny, nx});
                }
            }
        }
    }
    cout << d[n - 1][n - 1] << endl;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << d[i][j];
        }
        cout << endl;
    }
}