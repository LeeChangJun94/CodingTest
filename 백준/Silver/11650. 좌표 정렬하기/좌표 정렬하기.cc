#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Count;
    vector<pair<int, int>> Num;

    cin >> Count;
    Num.resize(Count);

    for (int i = 0; i < Count; i++)
    {
        cin >> Num[i].first >> Num[i].second;
    }
    
    sort(Num.begin(), Num.end());

    for (int i = 0; i < Count; i++)
    {
        cout << Num[i].first << " " << Num[i].second << "\n";
    }
    
    return 0;
}