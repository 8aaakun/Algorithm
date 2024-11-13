#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int s = 0;
        for (int j = 0; j < 10; j++)
        {
            int a;
            cin >> a;
            if(a%2 == 1){
                s += a;
            }
        }
        cout << "#" << i + 1 << " " << s << endl;
    }
}