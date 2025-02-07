#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2)
{
    int answer = 0;
    int Sum1 = 0;
    int Sum2 = 0;    
    
    if(arr1.size() == arr2.size())
    {
        for(int i = 0; i < arr1.size(); ++i)
        {
            Sum1 += arr1[i];
        }
        for(int i = 0; i < arr2.size(); ++i)
        {
            Sum2 += arr2[i];
        }
        if(Sum1 < Sum2)
        {
            answer = -1;
        }
        else if(Sum1 > Sum2)
        {
            answer = 1;
        }
        else
        {
            answer = 0;
        }
    }
    else if(arr1.size() < arr2.size())
    {
        answer = -1;
    }
    else
    {
        answer = 1;
    }
    
    
    
    return answer;
}