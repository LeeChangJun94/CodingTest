#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    int Size = A.size();

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < Size; ++i)
    {
        answer += A[i] * B[Size - i - 1];
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << answer << endl;

    return answer;
}