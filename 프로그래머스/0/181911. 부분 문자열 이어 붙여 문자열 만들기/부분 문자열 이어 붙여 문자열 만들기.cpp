#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) 
{
    string answer = "";
    
    for (int i = 0; i < my_strings.size(); i++)
    {
        string tempStr = my_strings[i];
        for (int j = parts[i][0]; j < parts[i][1] + 1; j++)
        {
            answer.push_back(tempStr[j]);
        }
    }
        
    return answer;
}