#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    string TempString = "";
    string String = "";
    int ZeroCount = 0;
    int ReCount = 0;
    int TempStringSize = 0;

    String += s;

    while (!(1 == String.size()))
    {
        for (int i = 0; i < String.size(); ++i)
        {
            if ('0' == String[i])
            {
                ZeroCount += 1;
                continue;
            }
            TempString += String[i];
        }

        TempStringSize = TempString.size();
        TempString = "";
        
        String = "";

        while (!(0 == TempStringSize / 2) || 1 == TempStringSize)
        {
            String.insert(0, 1, static_cast<char>(TempStringSize % 2) + '0');
            TempStringSize = TempStringSize / 2;
        }

        ReCount += 1;
    }

    answer.push_back(ReCount);
    answer.push_back(ZeroCount);

    return answer;
}