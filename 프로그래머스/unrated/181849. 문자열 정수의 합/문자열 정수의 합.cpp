#include <string>
#include <vector>

using namespace std;

int ConvertCharToInt(char c)
{
    int zeroAscii = '0';
    int result = c - zeroAscii;
    
    return result;
}

int SumStringNum(string str)
{
    int result = 0;
    for (int i = 0; i < str.length(); i++)
    {
        result += ConvertCharToInt(str[i]);
    }
    
    return result;
}

int solution(string num_str) {
    int answer = SumStringNum(num_str);
    return answer;
}