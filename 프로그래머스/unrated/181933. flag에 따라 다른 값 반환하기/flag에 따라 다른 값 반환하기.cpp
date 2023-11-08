#include <string>
#include <vector>

using namespace std;

int CheckFlag(int a, int b, bool flag)
{
    int result = 0;
    if (flag)
    {
        result = a + b;    
    }
    else
    {
        result = a - b;
    }
    
    return result;
}

int solution(int a, int b, bool flag) {
    int answer = CheckFlag(a, b, flag);
    return answer;
}