#include <string>
#include <vector>

using namespace std;

string ConvertIntToString(int n)
{
    if (n == 0)
    {
        return "0";
    }
    
    string result = "";
    while (n > 0)
    {
        int digit = n % 10;
        result = char('0' + digit) + result;
        n /= 10;
    }
    
    return result;
}

string solution(int n) {
    string answer = ConvertIntToString(n);
    return answer;
}