#include <bits/stdc++.h>
using namespace std;

bool beautiful(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int n = arr.size();
    vector<int> temp;

    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (i == j)
        {
            temp.push_back(arr[i]);
        }
        else
        {
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
        }
        i++;
        j--;
    }
    int prefixSum = 0;
    for (int x : temp)
    {
        if (prefixSum == x)
            return false;
        prefixSum += x;
    }

    arr = temp;

    return true;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ok = beautiful(arr);

    if (ok)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    else
    {
      cout << "NO" << endl;
            return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
}