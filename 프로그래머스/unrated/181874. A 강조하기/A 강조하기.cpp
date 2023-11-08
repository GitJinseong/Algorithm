#include <string>
#include <vector>

using namespace std;

string ConvertAlphabet(string str)
{
    vector<char> charVector(str.begin(), str.end());   
    for (int i = 0; i < charVector.size(); i++)
    {
        if (charVector[i] == 'a')
        {
            charVector[i] = 'A';
        }
        else if (charVector[i] >= 66 and charVector[i] <= 90)
        {
            charVector[i] += 32;
        }
    }
    
    string result(charVector.begin(), charVector.end());
    return result;
}

string solution(string myString) {
    string answer = ConvertAlphabet(myString);
    return answer;
}