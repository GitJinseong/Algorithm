#include <string>
#include <vector>

using namespace std;

int CheckMultipleNumber(int num, int n)
{
    int result = 0;
    if (num % n == 0)
    {
        result = 1;
    }
    
    return result;
}
int solution(int num, int n) {
    int answer = CheckMultipleNumber(
    num, n);
    return answer;
}