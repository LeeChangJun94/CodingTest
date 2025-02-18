#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Count = 0;
    int Sum = 0;

    vector<int> v;

    cin >> Count;
    v.resize(Count);

    for (int i = 0; i < Count; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < Count; i++)
    {
        Sum += v[i] * (Count - i);
    }

    cout << Sum;

    return 0;
}