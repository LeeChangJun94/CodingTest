#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    int Count = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if ('(' == s[i])
        {
            Count += 1;
        }
        else
        {
            Count += -1;
        }

        if (0 > Count)
        {
            break;
        }
    }

    if (0 == Count)
    {
        answer = true;
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << answer << endl;

    return answer;
}