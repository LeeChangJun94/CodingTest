#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{
    string answer = "";
    
    for(int i = 0; i < myString.size(); ++i)
    {
        if('a' == myString[i] || 'A' == myString[i])
        {
            answer += toupper(myString[i]);
            continue;
        }
        
        answer += tolower(myString[i]);
    }
    
    return answer;
}