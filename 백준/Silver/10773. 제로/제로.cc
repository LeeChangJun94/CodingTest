#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Count = 0;
    int N = 0;
    int CountN = 0;
    vector<int> Num;

    cin >> Count;
    Num.resize(Count);

    for (int i = 0; i < Count; i++)
    {
        cin >> N;
        if (0 == N)
        {
            Num.erase(Num.begin() + CountN - 1);
            CountN--;
            continue;
        }

        Num[CountN] = N;
        CountN++;
    }
    
    cout << accumulate(Num.begin(), Num.end(), 0);

    return 0;
}