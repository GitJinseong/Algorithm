#include <string>
#include <vector>

using namespace std;

string ConvertUppercase(string str)
{
    string result = "";
    int lowerCase = 97;
    int upperMinusNum = 32;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= lowerCase)
        {
            str[i] -= upperMinusNum;
        }
    }
    
    result = str;
    return result;
}

string solution(string myString) {
    string answer = ConvertUppercase(
    myString);
    return answer;
}