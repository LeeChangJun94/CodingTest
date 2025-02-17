#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Num;

bool Binary_Search(int L, int R, int x)
{
    if (L > R) return false;
    int mid = (L + R) / 2;
    if(x < Num[mid])
    { 
        return Binary_Search(L, mid-1, x);
    }
    else if (x > Num[mid])
    {
        return Binary_Search(mid+1, R, x);
    }
    else
    {
        return true;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n, count;
    int BNum = 0;
    cin >> m;
    Num.resize(m);

    for (int i = 0; i < m; i++)
    {
        cin >> Num[i];
    }

    sort(Num.begin(), Num.end());

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> n;
        cout << std::binary_search(Num.begin(),Num.end(), n) << '\n';
    }
    
    return 0;
}