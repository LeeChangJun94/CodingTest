#include <iostream>
#include <vector>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    vector<bool> isPrime(n + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if ( isPrime[i] == false)
        {
            continue;
        }
        for (int j = i * 2; j <= n; j += i)
        {
            isPrime[j] = false;
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (isPrime[i] == false)
        {
            continue;
        }

        cout << i << "\n";
    }

    return 0;
}