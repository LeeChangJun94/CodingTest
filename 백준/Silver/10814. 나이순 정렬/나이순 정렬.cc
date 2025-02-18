#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Num = 0;
    string String = "";
    int Count = 0;

    multimap<int, string> m;

    cin >> Count;
    
    for (int i = 0; i < Count; i++)
    {
        cin >> Num >> String;

        m.insert({ Num, String });
    }

    for (auto iter : m)
    {
        cout << iter.first << " " << iter.second << "\n";
    }

    return 0;
}