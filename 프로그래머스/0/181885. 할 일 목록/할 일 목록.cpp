#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished)
{
    vector<string> answer;
    answer.reserve(todo_list.size());
    
    for(int i = 0; i < finished.size(); ++i)
    {
        if(!finished[i])
        {
            answer.push_back(todo_list[i]);
        }
    }
    
    return answer;
}