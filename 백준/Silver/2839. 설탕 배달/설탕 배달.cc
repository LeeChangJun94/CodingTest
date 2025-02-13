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

    cin >> N;

    if (0 == N % 5)
    {
        Answer = N / 5;
    }
    else if (1 == N % 5)
    {
        Answer = N / 5 + 1;
    }
    else if (2 == N % 5)
    {
        for (int i = N / 5; i >= 0; --i)
        {
            if (0 == (N - i * 5) % 3)
            {
                Answer = i + (N - i * 5) / 3;
                break;
            }
            else
            {
                Answer = -1;
            }
        }
    }
    else if (3 == N % 5)
    {
        Answer = N / 5 + 1;
    }
    else if (4 == N % 5)
    {
        if (!(0 == N / 5))
        {
            Answer = N / 5 + 2;
        }
        else
        {
            Answer = -1;
        }
    }

    cout << Answer;

    return 0;
}