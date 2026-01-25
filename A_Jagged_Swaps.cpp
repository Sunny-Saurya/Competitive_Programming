#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

void swapping(vector<int> &arr, int index)
{
    swap(arr[index], arr[index + 1]);
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

    if (isArraySorted(arr))
    {
        cout << "YES\n";
        return;
    }

    bool moved = true;

    while (moved)
    {
        moved = false;

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                swapping(arr, i);
                moved = true;
            }
        }
    }

    if (isArraySorted(arr))
        cout << "YES\n";
    else
        cout << "NO\n";
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
