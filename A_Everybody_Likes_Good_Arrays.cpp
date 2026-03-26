#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int operation = 0;
    int i = 1;
    while (i < n)
    {
        if(arr[i] % 2 == arr[i-1] % 2){
            arr[i] = arr[i] * arr[i-1];

            // deleting
            arr.erase(arr.begin() + i);
            n--;
            operation++;
        }
        else{
            i++;
        }
        
    }
    cout << operation << endl;
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