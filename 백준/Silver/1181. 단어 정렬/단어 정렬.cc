#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

class Compare 
{
public:
    bool operator()(string _left, string _right)const
    {
        if (_left.size() == _right.size()) 
        {
            return _left < _right;
        }

        return _left.size() < _right.size();
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Count = 0;
    string String = "";
    std::set<string, Compare> Set;

    cin >> Count;
    
    for (int i = 0; i < Count; i++)
    {
        cin >> String;
        Set.insert(String); 
    }
    for (string a : Set) 
    {
        cout << a << "\n";
    }

    return 0;
}