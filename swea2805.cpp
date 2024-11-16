#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int map[50][50];
    bool visited[50][50] = {false,};
    deque<pair<int, int>> dq;
    int res = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string a;
        cin >> a;
        for (int j = 0; j < n; j++){
            map[i][j] = a[j] - '0';
        }
    }

    dq.push_back({n / 2, n / 2});
    visited[n / 2][n / 2] = true;
    res += map[n / 2][n / 2];
    int flag = 0;

    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {1, 0, 0, -1};

    while(!dq.empty()){
        if(flag == 4){
            break;
        }
        pair<int, int> cur = dq.front();
        dq.pop_front();

        for (int i = 0; i < 4; i++){
            int nx = cur.second + dx[i];
            int ny = cur.first + dy[i];
            
            if(nx >=0 && ny >=0 && nx<n && ny<n && !visited[ny][nx]){
                visited[ny][nx] = true;
                res += map[ny][nx];
                dq.push_back({ny, nx});
                if(nx == 0 || ny ==0 || nx ==n-1 || ny == n-1){
                    flag++;
                }
            }
        }
    }

    cout << res << endl;
}
