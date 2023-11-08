#include <string>
#include <vector>

using namespace std;

string RemoveZero(string str)
{
    vector<char> charVector(
        str.begin(), str.end());
    char checkSymbol = '0';
    int index = 0;
    if (charVector[0] == checkSymbol)
    {
        for (int i = 0; i < charVector.size(); i++)
        {
            if (charVector[i] == checkSymbol)
            {
                index++;
            }
            else
            {
                break;
            }
        }
    }
    
    string result(charVector.begin() + (index), 
                  charVector.end());
    return result;
}

string solution(string n_str) {
    string answer = RemoveZero(n_str);
    return answer;
}