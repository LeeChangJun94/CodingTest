#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Count = 0;
    int N = 0;
    int Sum = 0;
    priority_queue<int, vector<int>, greater<int>> q;

    cin >> Count;
    
    for (int i = 0; i < Count; i++)
    {
        cin >> N;
        q.push(N);
    }

    while (1 < q.size())
    {
        int First = q.top();
        q.pop();

        int Second = q.top();
        q.pop();

        int TempSum = First + Second;
        Sum += TempSum;

        q.push(TempSum);
    }

    cout << Sum;

    return 0;
}