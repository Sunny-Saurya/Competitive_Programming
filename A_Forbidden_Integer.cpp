#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> arr;
    if(x != 1 && k > 1){
        for(int i = 0;  i< n; i++){
            arr.push_back(1);
        }
    }else{
    for (int i = 1; i <= k; i++)
    {
        if (i != x)
        {
            if (n % i == 0)
            {   
                for(int i = 0)
                return;
            }
        }
    }
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