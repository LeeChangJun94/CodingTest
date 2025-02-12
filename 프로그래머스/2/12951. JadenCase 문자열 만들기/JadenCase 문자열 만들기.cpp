#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    bool FirstText = true;

    for (int i = 0; i < s.size(); ++i)
    {
        if (' ' == s[i])
        {
            FirstText = true;
            answer.push_back(s[i]);
            continue;
        }
        
        if (FirstText)
        {
            answer.push_back(toupper(s[i]));
            FirstText = false;
            continue;
        }

        answer.push_back(tolower(s[i]));

    }

    return answer;
}