#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string BinaryTrans(int _N)
{
    string _String = "";
    while (!(0 == _N / 2) || 1 == _N)
    {
        _String += _N % 2 + '0';
        _N = _N / 2;
    }

    return _String;
}

int solution(int n)
{
    int Num = n;
    string TempString_1 = "";
    string TempString_2 = "";

    TempString_1 = BinaryTrans(n);

    while (!(count(TempString_1.begin(), TempString_1.end(), '1') == count(TempString_2.begin(), TempString_2.end(), '1')))
    {
        Num += 1;
        TempString_2 = BinaryTrans(Num);
    }
    
    return Num;
}