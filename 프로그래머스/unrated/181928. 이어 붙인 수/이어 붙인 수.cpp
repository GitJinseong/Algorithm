#include <string>
#include <vector>
#include <cmath>

using namespace std;

int ConcatenateNumbers(vector<int> num_list)
{
    int result = 0;
    int multiple = 0;
    int size = num_list.size();
    for (int i = 0; i < size; i++)
    {
        multiple = pow(10, (size - i) - 1);
        result += num_list[i] * multiple;
    }
    
    return result;
}

int GetSumEvenAndOdd(vector<int> num_list)
{
    vector<int> even_list;
    vector<int> odd_list;
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            even_list.push_back(num_list[i]);
        }
        else
        {
            odd_list.push_back(num_list[i]);
        }
    }
    
    int result = ConcatenateNumbers(even_list) + 
        ConcatenateNumbers(odd_list);
    return result;
}

int solution(vector<int> num_list) {
    int answer = GetSumEvenAndOdd(num_list);
    return answer;
}