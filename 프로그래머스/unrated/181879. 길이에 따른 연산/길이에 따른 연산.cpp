#include <string>
#include <vector>

using namespace std;

int CalculateListOperation(vector<int> num_list)
{
    int result = 0;
    int sum = 0;
    int multiple = num_list[0];
    bool isOver = num_list.size() >= 11;
    for (int i = 0; i < num_list.size(); i++)
    {
        if (isOver)
        {
            sum += num_list[i];
        }
        else if (i > 0)
        {
            multiple *= num_list[i];
        }
    }
    result = isOver ? sum : multiple;
    
    return result;
}

int solution(vector<int> num_list) {
    int answer = CalculateListOperation(num_list);
    return answer;
}