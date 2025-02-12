#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int Sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        Sum = 0;
        for (int j = i; j <= n; ++j)
        {
            Sum += j;
            if (n <= Sum)
            {
                break;
            }
        }

        if (n == Sum)
        {
            answer += 1;
        }
    }

    return answer;
}