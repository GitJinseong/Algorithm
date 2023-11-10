#include <string>
#include <vector>

using namespace std;

vector<int> CountUp(int start_num, int end_num)
{
    vector<int> result;
    int size = (end_num - start_num) + 1;
    for(int i = 0; i < size; i++)
    {
        result.push_back(start_num + i);
    }
    
    return result;
}

vector<int> solution(int start_num, int end_num) {
    vector<int> answer = CountUp(
    start_num, end_num);
    return answer;
}