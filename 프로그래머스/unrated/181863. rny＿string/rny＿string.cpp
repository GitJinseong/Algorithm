#include <string>
#include <vector>

using namespace std;

string PrankForString(string str)
{
    string result = "";
    string tempStr = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'm')
        {
            tempStr += "rn";
        }
        else
        {
            tempStr += str[i];
        }
    }
    
    result = tempStr;
    return result;
}

string solution(string rny_string) {
    string answer = PrankForString(rny_string);
    return answer;
}