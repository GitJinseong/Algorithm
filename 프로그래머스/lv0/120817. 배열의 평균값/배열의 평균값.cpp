#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    
    double answer = 0;
    int count = 0;
    
    for (int i = 0; numbers[i] < 1000; i++)
    {
        if (numbers[i] >= 1)
        {
            answer = answer + numbers[i];
            count++;
        }
    }
    
    return answer / count;
}