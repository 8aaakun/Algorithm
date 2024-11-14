#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int map[11][11] = {0, };
    deque<pair<int, int>> dq;
    int depth = 1;
    map[0][0] = depth++;

    int dx[4] = {0, -1, 0, 1};
    int dy[4] = {-1, 0, 1, 0};

    dq.push_back({0, 0});
    
    while(!dq.empty()){
        pair<int, int> cur = dq.back();
        dq.pop_back();
        if(map[cur.first][cur.second] == 0){
            map[cur.first][cur.second] = depth++;
        }
        for (int i = 0; i < 4; i++){
            int nx = cur.second + dx[i];
            int ny = cur.first + dy[i];
            
            if(nx >= 0 && ny >=0 && nx <n && ny <n && map[ny][nx] == 0)
            {
                dq.push_back({ny, nx});
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}