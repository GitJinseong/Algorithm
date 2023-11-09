#include <string>
#include <vector>

using namespace std;

vector<int> GetSubListAtLocation(vector <int> num_list, int index)
{
    vector<int> result;
    for (int i = (index - 1); i < num_list.size(); i++)
    {
        result.push_back(num_list[i]);
    }
    
    return result;
}

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer = GetSubListAtLocation(
    num_list, n);
    return answer;
}