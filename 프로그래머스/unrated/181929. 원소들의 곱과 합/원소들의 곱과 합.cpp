#include <string>
#include <vector>
using namespace std;

int CheckProductVsSquareSum(vector<int> num_list)
{
    int result = 0;
    int product = 0;
    int squareSum = 0;
    for (int i = 0; i < num_list.size(); i++)
    {   
        if (i == 0)
        {
            product += num_list[0];
        }
        else
        {
            product *= num_list[i];
        }
        squareSum += num_list[i];
    }
    
    squareSum *= squareSum;
    if (product < squareSum)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    
    return result;
}

int solution(vector<int> num_list) {
    int answer = CheckProductVsSquareSum(num_list);
    return answer;
}