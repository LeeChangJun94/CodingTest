#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Num = 0;
    int Count = 0;
    int Start = 0;
    int Sum = 0;
    int MinLength = 0;

    vector<int> VNum;

    cin >> Count >> Num;
    VNum.resize(Count);

    MinLength = Count + 1;

    for (int i = 0; i < Count; i++)
    {
        cin >> VNum[i];
    }

    for (int End = 0; End < Count; End++)
    {
        Sum += VNum[End];

        while (Num <= Sum)
        {
            MinLength = min(MinLength, End - Start + 1);
            Sum -= VNum[Start];
            Start++;
        }
    }

    if (Count + 1 == MinLength)
    {
        cout << 0;
    }
    else
    {
        cout << MinLength;
    }

    return 0;
}