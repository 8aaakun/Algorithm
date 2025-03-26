#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int cnt;
    deque<string> dq;
    cin >> s >> cnt;
    int len = s.length();
    dq.push_back(s);
    int max = stoi(s);

    while(cnt--){
        int size = dq.size();
        for (int i = 0; i < size; i++)
        {
            string s = dq.front();
            dq.pop_front();
            for (int j = 0; j < len-1; j++){
                for (int k = j + 1; k < len; k++){
                    swap(s[j], s[k]);
                    int val = stoi(s);
                    if (max < val)
                    {
                        max = val;
                        dq.push_back(s);
                    }
                    swap(s[j], s[k]);
                }
            }
        }
    }

    cout << max << endl;
}