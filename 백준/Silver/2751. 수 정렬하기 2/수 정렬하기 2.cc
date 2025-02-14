#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 0;
    int Answer = 0;
    vector<int> VNum;
    int Num = 0;

    cin >> N;
    VNum.resize(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> Num;
        VNum[i] = Num;
    }

    sort(VNum.begin(), VNum.end());
    
    for (int i = 0; i < N; ++i)
    {
        cout << VNum[i] << "\n";
    }

    return 0;
}