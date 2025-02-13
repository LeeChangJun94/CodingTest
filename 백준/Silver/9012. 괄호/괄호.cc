#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 0;
    int Count = 0;
    vector<string> VString;

    cin >> N;
    VString.resize(N);
    cin.ignore();

    for (int i = 0; i < N; ++i)
    {
        getline(cin, VString[i]);
    }

    for (int i = 0; i < VString.size(); ++i)
    {
        Count = 0;
        bool VPS = true;
        for (int j = 0; j < VString[i].length(); ++j)
        {
            if ('(' == VString[i][j])
            {
                Count += 1;
            }
            else if (')' == VString[i][j])
            {
                Count -= 1;
            }
            
            if (0 > Count)
            {
                cout << "NO" << endl;
                VPS = false;
                break;
            }
        }

        if (VPS)
        {
            if (0 == Count)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}