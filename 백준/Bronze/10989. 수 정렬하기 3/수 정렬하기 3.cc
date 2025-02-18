#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Count = 0;
    int N = 0;
    int Sum = 0;

    vector<int> v(10001, 0);

    cin >> Count;
    
    for (int i = 0; i < Count; i++)
    {
        cin >> N;
        v[N]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        while (v[i]--)
        {
            cout << i << "\n";
        }
    }

    return 0;
}