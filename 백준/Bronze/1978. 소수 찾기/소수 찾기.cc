#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 0;
    int Answer = 0;
    int Index = 0;
    int Count = 0;
    vector<int> Num;
    string SNum;
    string TempString = "";

    cin >> N;
    Num.resize(N);
    cin.ignore();
    getline(cin, SNum);

    for (int i = 0; i < SNum.size(); ++i)
    {
        if (' ' == SNum[i])
        {
            Num[Index] = stoi(TempString);
            TempString = "";
            Index += 1;
            continue;
        }

        TempString += SNum[i];
    }
    Num[Index] = stoi(TempString);

    for (int i = 0; i < Num.size(); ++i)
    {
        if (1 == Num[i])
        {
            N -= 1;
            continue;
        }
        for (int j = 2; j < Num[i]; ++j)
        {
            if (0 == Num[i] % j)
            {
                N -= 1;
                break;
            }
        }
    }

    cout << N;

    return 0;
}