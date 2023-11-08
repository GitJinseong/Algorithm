#include <string>
#include <vector>

using namespace std;

vector<string> GetFirstPeopleName(vector<string> names)
{
    vector<string> result;
    for (int i = 0; i < names.size(); i++)
    {
        result.push_back(names[i]);
        i += 4;
    }
    return result;
}

vector<string> solution(vector<string> names) {
    vector<string> answer = GetFirstPeopleName(names);
    return answer;
}