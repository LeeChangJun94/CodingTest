#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Count = 0;
    int Num = 0;
    string SOrder = "";


    int Stack[10000];
    int Top = -1;

    cin >> Count;
    
    for (int i = 0; i < Count; ++i)
    {
        cin >> SOrder;
        if ("push" == SOrder)
        {
            cin >> Num;
            Top += 1;
            Stack[Top] = Num;
        }

        if ("top" == SOrder)
        {
            if (-1 == Top)
            {
                cout << Top << "\n";
            }
            else
            {
                cout << Stack[Top] << "\n";
            }
        }
        
        if ("size" == SOrder)
        {
            cout << Top + 1 << "\n";
        }

        if ("empty" == SOrder)
        {
            if (-1 == Top)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }

        if ("pop" == SOrder)
        {
            if (-1 == Top)
            {
                cout << Top << "\n";
            }
            else
            {
                cout << Stack[Top] << "\n";
                Top -= 1;
            }
        }
    }

    return 0;
}