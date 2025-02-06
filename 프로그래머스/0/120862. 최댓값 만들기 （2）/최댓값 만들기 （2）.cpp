#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers)
{
    int MaxA = 0;
    int MaxB = 0;
    
    sort(numbers.begin(), numbers.end());
    
    MaxA = numbers[0] * numbers[1];
    MaxB = numbers[numbers.size() - 2] * numbers[numbers.size() - 1];
    
    if(MaxA < MaxB)
    {
        return MaxB;
    }
    
    return MaxA;
}