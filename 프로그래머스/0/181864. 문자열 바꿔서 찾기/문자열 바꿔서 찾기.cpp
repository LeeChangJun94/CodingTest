#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat)
{    
    for(int i = 0; i < pat.size(); ++i)
    {
        if('A' == pat[i])
        {
            pat[i] += 1;
        }
        else
        {
            pat[i] -= 1;
        }
    }
    
    
    if(std::string::npos == myString.find(pat))
    {
        return 0;
    }
    
    return 1;
}