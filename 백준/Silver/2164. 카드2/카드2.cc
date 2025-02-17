#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Count = 0;
    int N = 0;
    bool Bool = true;

    list<int> Num;

    cin >> Count;
    //Num.resize(Count);

    for (int i = 1; i <= Count; i++)
    {
        Num.push_back(i);
    }

    while (1 != Num.size())
    {
        if (Bool)
        {
            Num.pop_front();
            Bool = false;
        }
        else
        {
            int temp = Num.front();
            Num.pop_front();
            Num.push_back(temp);
            Bool = true;
        }
    }

    cout << *Num.begin() << "\n";

    return 0;
}