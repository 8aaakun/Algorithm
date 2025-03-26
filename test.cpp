#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool compare(int first, int second)
{
    return first < second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int n;
        int arr[1000001];
        int dat[1000001];
        bool flag = true;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            dat[arr[i]] = a;
        }
        sort(arr, arr + n);
        int bef = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (dat[arr[i]] > bef)
            {
                flag = false;
            }
            bef = dat[arr[i]];
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}