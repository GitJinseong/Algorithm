#include <string>
#include <vector>

using namespace std;

string ConvertMultipleString(string my_string, int multiple)
{
    string result = "";
    string tempStr = "";
    for (int i = 0; i < multiple; i++)
    {
        tempStr += my_string;
    }
    
    result = tempStr;
    return result;
}

string solution(string my_string, int k) {
    string answer = ConvertMultipleString(
    my_string, k);
    return answer;
}