#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s)
{
    string answer = "";
    string TempString = "";
    vector<int> Num;
    int i = 0;

    for (int i = 0; i < s.length(); ++i)
    {
        if (' ' == s[i])
        {
            Num.push_back(stoi(TempString));
            TempString = "";
            continue;
        }
        TempString.push_back(s[i]);
    }
    Num.push_back(stoi(TempString));

    answer += to_string(*min_element(Num.begin(), Num.end()));
    answer += " ";
    answer += to_string(*max_element(Num.begin(), Num.end()));

    return answer;
}