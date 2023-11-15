#include <string>
#include <vector>

using namespace std;

int SumUntilExceed(vector<int> numbers, int n)
{
    int result = 0;
    for(int i = 0; i < numbers.size(); i++)
    {
        result += numbers[i];
        if (result > n)
        {
            break;
        }
    }
    
    return result;
}

int solution(vector<int> numbers, int n) {
    int answer = SumUntilExceed(numbers, n);
    return answer;
}